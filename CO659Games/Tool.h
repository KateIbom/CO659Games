#pragma once
#include <string>
#include <iostream>


class Tool

{
	//example of abstraction showing some of the 
	//properties and methods of a tool
public:
	
	Tool();
	virtual ~Tool();

	//Functions
	void Display();
	void Use();

	//Accessors

	inline int getWeight() const 
	{
		return this->weight;
	}
	inline int getTotalWeight() const
	{
		return this->totalWeight;
	}

protected:
	
	static int totalWeight;
	int weight;
};

