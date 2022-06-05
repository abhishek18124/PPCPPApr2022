#include<iostream>

using namespace std;

int countPaths(char maze[][5], int i, int j) {

	// base case
	
	if(i < 0 or j < 0) {
		return 0;
	}

	if(i == 0 and j == 0) {
		return 1;
	}

	// recursive case

	if(maze[i][j] == 'X') {
		return 0;
	}

	// ask your friend to count no. of paths to reach 
	// (i, j)th cell from the top
	int X = countPaths(maze, i-1, j);

	// ask your friend to count no. of paths to reach
	// (i, j)th cell from the left
	int Y = countPaths(maze, i, j-1);

	return X + Y;


}

int main() {

	char maze[5][5] = {"000X",
                       "00X0",
                       "X000",
                       "0X00"};

    int m = 4;
    int n = 4;

    cout << countPaths(maze, m-1, n-1) << endl;

	return 0;
}