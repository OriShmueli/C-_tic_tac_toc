#include "CommendsSys.h"
#include <string>


char CommendsSys::selector()
{
	char mode_num;

	menu_start:
	system("cls");

	cout << "1) you vs pc\n" << endl;
	Sleep(500);
	cout << "2) 1 vs 1\n" << endl;
	Sleep(500);
	cout << "3) you random pc steps\n" << endl;
	Sleep(500);
	cout << "->";
	
	cin.get(mode_num);

	if (mode_num == 3 || mode_num == 2 || mode_num == 1)
	{
		cout << "\nyou have only 3 options - [1] , [2] , [3]\n";
		Sleep(3000);
		goto menu_start;
	}
	else
	{
		return mode_num;
	}

	
}
