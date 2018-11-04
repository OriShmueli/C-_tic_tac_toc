#include <iostream>
#include <string>
#include <Windows.h>
#include "brain.h"
#include "CommendsSys.h"

using namespace std;

//globals
brain *Pbrain = new brain();

//voids
void winner(char);
void vs_pc();
void one_vs_one();
void random_brian();

int main() {

	CommendsSys *comsys = new CommendsSys;
	char mun_m = comsys->selector();
	
	if (mun_m == '1')
	{
		vs_pc();
	}

	if (mun_m == '2')
	{
		one_vs_one();
	}

	if (mun_m == '3')
	{
		random_brian();
	}
	
}

void vs_pc() {

	cout << "O you are starting" << endl;

	int end = 0;
	Pbrain->draw();
	while (true)
	{
		end++;
		Pbrain->step_o();
		Pbrain->draw();
		char win = Pbrain->win();
		if (win == 'x' || win == 'o') {
			winner(char(win + "win"));
			break;
	}

	if (win == '/' || end == 9) {

	}

	Pbrain->step_x();
	Pbrain->draw();
}

}

void one_vs_one() {

	cout << "its working\n";
	system("pause");
	
}

void random_brian() {

	cout << "working" << endl;
	system("pause");
}


void winner(char win) {

	cout << "\n\nyou win: " << win << "\n\n";
	
	CommendsSys comsys;

	string restartCommend;	
	cin >> restartCommend;

	if (restartCommend != "restart")
	{
		exit(0);
	}
	else
	{
		system("cls");
		comsys.selector();
	}
}