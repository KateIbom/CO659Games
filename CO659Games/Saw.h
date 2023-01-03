#pragma once
#include "Tool.h"

/// <summary>
/// This is a tool that can be used to saw off a branch. 
/// Its weight will affect 
/// how far it can be carried
/// </summary>

class Saw :
    public Tool
{
public:
	Saw(int weight);

	//Functions
	void Display();
	void Use();
	void Use(int times);

private:
};

