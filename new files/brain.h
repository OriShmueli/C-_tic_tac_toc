#pragma once

#include <Windows.h>
#include <iostream>
#include <string>

using namespace std;

class brain
{
public:
	
	void step(char return_player);
	void draw();
	void step_o();
	void step_x();

	char win();
};

class random : public brain
{
public:
	


};



