#include <iostream>
#include <string>
#include <Windows.h>
#include "brain.h"

using namespace std;

//globals
brain *Pbrain = new brain();

void winner(string);

int main() {
	
	cout << "x you are starting"<<endl;

	Pbrain->draw();
	while (true)
	{	
		Pbrain->step_o();
		Pbrain->draw();
		if (Pbrain->win() == 'x') {
			winner("x win");
		}
		else if (Pbrain->win = 'o') {
			winner("o win");
		}
		Pbrain->step_x();
		Pbrain->draw();
		
	}
	system("pause");
}

void winner(string) {

	cout << "\n\nyou win\n\n";
	system("pause");
}