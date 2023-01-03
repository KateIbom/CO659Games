#pragma once
#include "Tool.h"

/// <summary>
/// This is a tool that can be used to hammer
/// a number of nails. Its weight will affect 
/// how far it can be carried
/// </summary>
class Hammer : 
	public Tool 
{

public:
	Hammer(int weight);

	//Functions
	void Display();
	void Use();
	void Use(int times);

private:
};


