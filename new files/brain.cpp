#include "brain.h"

char map[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };


int player;
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

void brain::step_o()
{

	
	cout << "make your move O : ";
	cin >>player;
	cout << "\n";

	for (int  i = 0; i < 9; i++)
	{
		map[player / 3][player % 3] = X_player_c + 1;
	}

	/*
	if (playero == 1)
	{
		map[0][0] = O_player_c;
		cout << "make your move X\n";

	}
	
	 if (playero == 2) {
		map[0][1] = O_player_c;
		cout << "make your move X\n";

	}
	else if (playero == 3) {
		map[0][2] = O_player_c;
		cout << "make your move X\n";

	}
	else if (playero == 4) {
		map[1][0] = O_player_c;
		cout << "make your move X\n";

	}
	else if (playero == 5) {
		map[1][1] = O_player_c;
		cout << "make your move X\n";

	}
	else if (playero == 6) {
		map[1][2] = O_player_c;
		cout << "make your move X\n";

	}
	else if (playero == 7) {
		map[2][0] = O_player_c;
		cout << "make your move X\n";

	}
	else if (playero == 8) {
		map[2][1] = O_player_c;
		cout << "make your move X\n";

	}
	else if (playero == 9) {
		map[2][2] = O_player_c;
		cout << "make your move X\n";

	}*/
}

/*

void brain::step_x()
{


	if (map[0][0] == 'o')
	{
		map[0][1] = X_player_c;

	}
	else if (map[0][1] == 'o') {
		map[0][2] = X_player_c;
		cout << "make your move X\n";

	}
	else if (map[0][2] == 'o') {
		map[0][2] = X_player_c;
		cout << "make your move X\n";

	}
	else if (map[0][2] == 'o') {
		map[0][2] = X_player_c;
		cout << "make your move X\n";

	}
	else if (map[0][2] == 'o') {
		map[0][2] = X_player_c;
		cout << "make your move X\n";

	}
	else if (map[0][2] == 'o') {
		map[0][2] = X_player_c;
		cout << "make your move X\n";

	}
	else if (map[0][2] == 'o') {
		map[0][2] = X_player_c;
		cout << "make your move X\n";

	}
	else if (map[0][2] == 'o') {
		map[0][2] = X_player_c;
		cout << "make your move X\n";

	}
	else if (map[0][2] == 'o') {
		map[0][2] = X_player_c;
		cout << "make your move X\n";

	}
}

*/

void brain::step_x()
{
	int playerx;
	cout << "make your move X : ";
	cin >> playerx;
	cout << "\n";

	if (playerx == 1)
	{
		map[0][0] = X_player_c;
		cout << "make your move X\n";

	}
	else if (playerx == 2) {
		map[0][1] = X_player_c;
		cout << "make your move X\n";

	}
	else if (playerx == 3) {
		map[0][2] = X_player_c;
		cout << "make your move X\n";

	}
	else if (playerx == 4) {
		map[1][0] = X_player_c;
		cout << "make your move X\n";

	}
	else if (playerx == 5) {
		map[1][1] = X_player_c;
		cout << "make your move X\n";

	}
	else if (playerx == 6) {
		map[1][2] = X_player_c;
		cout << "make your move X\n";

	}
	else if (playerx == 7) {
		map[2][0] = X_player_c;
		cout << "make your move X\n";

	}
	else if (playerx == 8) {
		map[2][1] = X_player_c;
		cout << "make your move X\n";

	}
	else if (playerx == 9) {
		map[2][2] = X_player_c;
		cout << "make your move X\n";

	}
}

char brain::win()
{
	//x
	if (map[0][0] == 'x' && map[0][1] == 'x' && map[0][2] == 'x')
		return 'x';

	if (map[1][0] == 'x' && map[1][1] == 'x' && map[1][2] == 'x')
		return 'x';

	if (map[2][0] == 'x' && map[2][1] == 'x' && map[2][2] == 'x')
		return 'x';

	if (map[0][0] == 'x' && map[1][0] == 'x' && map[2][0] == 'x')
		return 'x';

	if (map[0][1] == 'x' && map[1][1] == 'x' && map[2][1] == 'x')
		return 'x';

	if (map[0][2] == 'x' && map[1][2] == 'x' && map[2][2] == 'x')
		return 'x';
	
	if (map[0][0] == 'x' && map[1][1] == 'x' && map[2][2] == 'x')
		return 'x';
	
	if (map[0][2] == 'x' && map[1][1] == 'x' && map[2][0] == 'x')
		return 'x';

	//o
	if (map[0][0] == 'o' && map[0][1] == 'o' && map[0][2] == 'o')
		return 'o';

	if (map[1][0] == 'o' && map[1][1] == 'o' && map[1][2] == 'o')
		return 'o';

	if (map[2][0] == 'o' && map[2][1] == 'o' && map[2][2] == 'o')
		return 'o';

	if (map[0][0] == 'o' && map[1][0] == 'o' && map[2][0] == 'o')
		return 'o';

	if (map[0][1] == 'o' && map[1][1] == 'o' && map[2][1] == 'o')
		return 'o';

	if (map[0][2] == 'o' && map[1][2] == 'o' && map[2][2] == 'o')
		return 'o';

	if (map[0][0] == 'o' && map[1][1] == 'o' && map[2][2] == 'o')
		return 'o';

	if (map[0][2] == 'o' && map[1][1] == 'o' && map[2][0] == 'o')
		return 'o';

	return '/';
}
