#include "brain.h"

char map[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };



char X_player_c = 'x';
char O_player_c = 'o';

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

void brain::step(char return_player) {
	cout << "make your move " << return_player << " : ";
	char player;
	cin >> player;
	player = player - 1;
	cout << "\n";


	for (int i = 0; i < 9; i++)
	{
		map[player / 3][player % 3] = return_player;
	}

	
}

void brain::step_o()
{
	step(O_player_c);
}

void brain::step_x()
{
	step(X_player_c);
}

char brain::win()
{
	char players[] = { X_player_c, O_player_c };
	for (int row = 0; row < 2; row++) {
		for (int player_i = 0; player_i < 3; player_i++) {
			char player = players[player_i];
			if (map[row][0] == player && map[row][1] == player && map[row][2] == player) {
				return player;
			}
		}
	}

	return '/';
}