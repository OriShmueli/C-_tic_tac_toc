#pragma once

#include <Windows.h>
#include <iostream>
#include <string>

using namespace std;

class brain
{
public:
	brain();
	~brain();
	
	void draw();
	void step_x();
	void step_o();

	char win();
};

