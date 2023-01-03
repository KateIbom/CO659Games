#include "Saw.h"

Saw::Saw(int weight)
{
	this->weight = weight;
	this->totalWeight += weight;
	Display();

}


void Saw::Display()
{
	std::cout << "This is the weight of a saw = " << weight << std::endl;
}

void Saw::Use()
{
	std::cout << std::endl << "Saw off a branch!\n";
}

void Saw::Use(int times)
{
	std::cout << "Use(" << times << "): Saw " << times << "Branch!\n";
}

