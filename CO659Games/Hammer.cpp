
#include "Hammer.h"
#include <iostream>

using namespace std;


Hammer::Hammer(int weight) 
{
	this->weight = weight;
	this->totalWeight += weight;
	Display();
	
}


void Hammer::Display()
{
	std::cout << "This is the weight of a hammer = " << weight << std::endl;
}

void Hammer::Use()
{
	std::cout << std::endl << "Hammer a nail!\n";
}

void Hammer::Use(int times)
{
	std::cout << " Use("<< time <<"): Hammer " << times << " Nails!\n";
}

