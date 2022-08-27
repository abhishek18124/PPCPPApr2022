#include<iostream>
#include<vector>

using namespace std;

bool isPalindrome(string str) {
	int i = 0;
	int j= str.size() - 1;
	while(i < j) {
		if(str[i] != str[j]) {
			return false;
		}
		i++;
		j--;
	}
	return true;
}

int countPalindromicPartitioning(string str, int i, vector<string>& partition) {
	
	// base case
	
	if(i == str.size()) {
		// count the number of palindromic partitioning of str[n...n-1] 
		for(string p : partition) {
			cout << p << " ";
		}
		cout << endl;
		return 1;
	}

	// recursive case
	
	// count the number of palindromic partitioning of str[i...n-1] 
	
	int count = 0;
	for(int j=i; j<str.size(); j++) {
		string subString = str.substr(i, j-i+1);
		if(isPalindrome(subString)) {
			partition.push_back(subString);
			count += countPalindromicPartitioning(str, j+1, partition);
			partition.pop_back();
		}
	}

	return count;

}

int countPalindromicPartitioningBottomUp(string str) {

	int n = str.size();
	vector<int> dp(n+1);

	dp[n] = 1;

	for(int i = n-1; i>=0; i--) {
		// dp[i] = f(i)
		int count = 0;
		for(int j=i; j<n; j++) {
			string subString = str.substr(i, j-i+1);
			if(isPalindrome(subString)) {
				count += dp[j+1];
			}
		}
		dp[i] = count;
	}

	return dp[0];
}

int main() {

	string str = "abaca";
	vector<string> partition;

	cout << countPalindromicPartitioning(str, 0, partition) << endl;
	cout << countPalindromicPartitioningBottomUp(str) << endl;
	
	return 0;
}