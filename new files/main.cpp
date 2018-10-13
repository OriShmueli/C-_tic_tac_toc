#include <iostream>
#include <string>
#include <Windows.h>
#include "brain.h"
#include "CommendsSys.h"

using namespace std;

//globals
brain *Pbrain = new brain();

//voids
void winner(string);
void vs_pc();

int main() {
	
	CommendsSys comsys;
	
	
	
	vs_pc();
	
	


}

void Random_brian() {

	cout << "working" << endl;

}

void vs_pc() {

	cout << "O you are starting" << endl;


	Pbrain->draw();
	while (true)
	{
		Pbrain->step_o();
		Pbrain->draw();
		if (Pbrain->win() == 'x') {
			winner("x win");
			break;
		}
		if (Pbrain->win() == 'o') {
			winner("o win");
			break;
		}
		Pbrain->step_o();
		Pbrain->draw();
	}

}

void winner(string win) {

	cout << "\n\nyou win: " << win << "\n\n";
	
	string restartCommend;
	cin >> restartCommend;
	if (restartCommend != "restart")
	{
		exit(0);
	}
	else
	{
		main();
		system("cls");
	}
}