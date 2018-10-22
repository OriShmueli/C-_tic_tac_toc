#include "brain.h"

char map[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };



char X_player_c = 'x';
char O_player_c = 'o';
int playce;

void brain::draw()
{
	system("cls");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << map[i][j];
		}
		cout << endl;
	}
}

void brain::step(int player_c) {	
	cout << "make your move " << player_c << " : ";
	int player;
	cin >>player;
	player = player - 1;
	cout << "\n";
	
	
	for (int i = 0; i < 9; i++)
	{
		map[player / 3][player % 3] = player_c;
	}
}

void brain::step_o()
{
	step(O_player_c)
}


void brain::step_x()
{
	step(X_player_c)
}

char brain::win()
{
	char players[] = [X_player_c, O_player_c];
	for (int row = 0; row < 3; row ++) {
		for (int player_i = 0; player_i < 2 ; player_i ++) {
			char player = players[player_i];
			if (map[row][0] == player && map[row][1] == player && map[row][2] == player) {
				return player;
			}
		}
	}


	return '/';
}
