#include<iostream>

using namespace std;

bool checkPath(char maze[][5], int i, int j) {

	// base case
	
	// Additional Base Case to compensate for negative
	// i or negative j
	
	// if(i < 0 or j < 0) {
	// 	return false;
	// }

	if(i == 0 and j == 0) {
		// can you reach (0, 0)th cell from (0, 0)th cell ? Yes
		return true;
	}

	// recursive case

	if(maze[i][j] == 'X') {
		// (i, j)th cell is blocked therefore, you cannot reach it
		return false;
	}

	if(i == 0) {
		// ask your friend to check if you can reach
		// (i, j)th cell from the left
		return checkPath(maze, i, j-1);
	}

	if(j == 0) {
		// ask your friend to check if you can reach 
		// (i, j)th cell from the top
		return checkPath(maze, i-1, j);
	}

	// // ask your friend to check if you can reach 
	// // (i, j)th cell from the top
	// bool X = checkPath(maze, i-1, j);

	// // ask your friend to check if you can reach
	// // (i, j)th cell from the left
	// bool Y = checkPath(maze, i, j-1);

	// return X or Y;

	return checkPath(maze, i-1, j) or checkPath(maze, i, j-1);

}

int main() {

	char maze[5][5] = {"000X",
                       "00X0",
                       "X00X",
                       "0XX0"};

    int m = 4;
    int n = 4;

    checkPath(maze, m-1, n-1) ? cout << "true" << endl :
                                cout << "false" << endl;

	return 0;
}