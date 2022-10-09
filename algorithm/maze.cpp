#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
char input_maze[100][200];
int maze[100][200];

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
	int R = 100; // number of rows.
	int C = 200; // number of columns.
	int A; // number of rounds between the time the alarm countdown is activated and the time the alarm goes off.
	
	cin >> R >> C >> A; cin.ignore();
	int KR; // row where Kirk is located.
	int KC; // column where Kirk is located.
	int el_r = 0, el_c = 0;
	// game loop
	while (el_c<R) 
	{
		cin >> KR >> KC; cin.ignore();
		for (int i = 0; i < R; i++) 
		{

			string ROW; // C of the characters in '#.TC?' (i.e. one line of the ASCII input_maze).
			cin >> ROW; cin.ignore();

				el_r = 0;
				while (el_r < C) 
				{
					input_maze[el_c][el_r] = ROW[el_r];
				
					if (input_maze[el_c][el_r] == '#') {maze[el_c][el_r] = 0;}
					if (input_maze[el_c][el_r] == '.') {maze[el_c][el_r] = 1;}
					if (input_maze[el_c][el_r] == '?') {maze[el_c][el_r] = 2;}
					if (input_maze[el_c][el_r] == 'T') {maze[el_c][el_r] = 3;}
					if (input_maze[el_c][el_r] == 'C') {maze[el_c][el_r] = 4;}	
					el_r++;	
				}
				el_c++;	
		}		
	}


		for (int i = 0; i < R; i++) 
		{
			for (int j = 0; j < C; j++) 
			{
				cout << maze[i][j] <<" ";
			}

			cout << endl;

		}
}
	
