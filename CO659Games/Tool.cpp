#include "Tool.h"
#include <iostream>

using namespace std;


Tool::Tool()
{
	Display();
}


Tool::~Tool() 
{
	
}


void Tool::Display() 
{
	std::cout << std::endl << "This is a Tool\n" << std::endl;
}

void Tool::Use()
{
	std::cout << std::endl << " This Tool Does NOTHING\n";
}

int Tool::totalWeight = 0;
