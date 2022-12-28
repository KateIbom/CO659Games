#pragma once
class Tool

{
	//example of abstraction showing some of the 
	//properties and methods of a tool
private: 
	int weight;
public:
	Tool(int weight);
	virtual ~Tool(void);
	virtual void Display() = 0;
	virtual void Use();
};

