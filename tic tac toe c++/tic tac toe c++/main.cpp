#include <iostream>
#include <string>
#include <Windows.h>
#include "brain.h"

using namespace std;

//globals
brain *Pbrain = new brain();

void winner(string);

int main() {
	
	cout << "O you are starting"<<endl;

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
		Pbrain->step_x();
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
	}
}
