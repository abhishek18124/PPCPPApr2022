/*

Given n wines in a row, with integers denoting the cost of each wine respectively. Each year 
you can sell the first or the last wine in the row. However, the price of wines increases 
over time. 

Let the initial prices of the wines be [p_1, p_2, ... , p_n]. In the yth year, the profit 
from the kth wine will be y*p_k. 

Find the maximum profit from all the wines.

Example :
	Input : prices[] = {2, 3, 5, 1, 4}
	Ouptut: 50

*/

#include<iostream>
#include<vector>

using namespace std;

int maxProfit(vector<int> prices, int i, int j, int y) {

	// base case
	if(i == j) {
		return prices[i]*y; // or prices[j]*y
	}

	// recursive case

	// make a decision between ith and jth bottle of wine

	// 1. sell the ith bottle of wine
	int X = maxProfit(prices, i+1, j, y+1);

	// 2. sell the jth bottle of wine
	int Y = maxProfit(prices, i, j-1, y+1);

	return max(prices[i]*y + X, prices[j]*y + Y);

}

int maxProfitBottomUp(vector<int> p, int n) {

	vector<vector<int>> dp(n, vector<int>(n));

	for(int i=0; i<n; i++) {
		dp[i][i] = n*p[i]; // when i == j, you are left with a single bottle of wine that means you are in the nth year
	}

	for(int i=n-2; i>=0; i--) {
		for(int j=i+1; j<n; j++) {
			int y = n-(j-i);
			dp[i][j] = max(y*p[i] + dp[i+1][j],
				           y*p[j] + dp[i][j-1]);
		}
	}

	return dp[0][n-1];

}

int main() {

	vector<int> prices = {2, 3, 5, 1, 4};
	int n = prices.size();
	cout << maxProfit(prices, 0, n-1, 1) << endl;
	cout << maxProfitBottomUp(prices, n) << endl;
	
	return 0;
}