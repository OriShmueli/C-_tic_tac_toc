#include "CommendsSys.h"

enum playes{
	witch1,
	witch2
};



auto Pwitch1 = "->";
auto Pwitch2 = "";
auto witch3 = "";

void CommendsSys::selector(int gameMode)
{
	

	this->menu_print();

	while (true)
	{
		if (GetAsyncKeyState(VK_UP))
		{
			system("cls");
			this->menu_print();
		}
		else if (GetAsyncKeyState(VK_DOWN))
		{
			system("cls");
			this->menu_print();
		}

		if (GetAsyncKeyState(VK_TAB))
		{
			break;
		}
	}

	
}

void CommendsSys::menu_print()
{
	cout << Pwitch1 << "you vs pc" << endl;
	cout << Pwitch2 << "1 vs 1" << endl;
	cout << witch3 << "you random pc steps"<<endl ;
}
