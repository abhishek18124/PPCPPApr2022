#include<iostream>

using namespace std;

void printPaths(char maze[][5], char path[][5], int i, int j) {

	// base case
	
	if(i < 0 or j < 0) {
		return;
	}

	if(i == 0 and j == 0) {
		path[i][j] = '1';
		for(int k=0; k<4; k++) {
			for(int l=0; l<4; l++) {
				cout << path[k][l] << " ";
			}
			cout << endl;
		}
		cout << endl;
		path[i][j] = '0';
		return;
	}

	// recursive case

	if(maze[i][j] == 'X') {
		return;
	}

	path[i][j] = '1';
	printPaths(maze, path, i-1, j);
		
	// redundant code
	
	// path[i][j] = '0';
	// path[i][j] = '1';

	printPaths(maze, path, i, j-1);
	path[i][j] = '0'; // back-tracking step

}

int main() {

	char maze[5][5] = {"000X",
                       "00X0",
                       "X000",
                       "0X00"};

    char path[5][5] = {"0000",
					   "0000",
					   "0000",
					   "0000"};

    int m = 4;
    int n = 4;

    printPaths(maze, path, m-1, n-1);

	return 0;
}