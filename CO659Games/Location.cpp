
#include "Map.h"

Location::Location()
{

}

Location::Location(string name)
{
	this->name = name;
}

void Location::setExit(Directions direction, Location neighbour)
{
	int index = 2;
	exits[index] = &neighbour;
}

Location* Location::getExit(Directions direction)
{
	switch (direction)
	{
	case Directions::North: return exits[1]; break;
	case Directions::South: return exits[3]; break;
	case Directions::East: return exits[2]; break;
	case Directions::West: return exits[4]; break;

	default:break;
	}

	return nullptr;
}

void Location::setDescription(string description)
{
	this->description = description;
}

void Location::addTool(Tool tool)
{
	this->tool = tool;
}