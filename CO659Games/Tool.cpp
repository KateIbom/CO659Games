#include "Tool.h"
#include <iostream>

using namespace std;


Tool::Tool(int weight) :weight(weight) 
{
}


Tool::~Tool(void) 
{
	cout << "Delete Tool" << endl;
}


void Tool::Display() 
{
	cout << "Tool" << weight << endl;
}

void Tool::Use()
{
	cout << "Using tool" << endl;
}
