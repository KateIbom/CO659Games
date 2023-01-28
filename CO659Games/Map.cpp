#include "Map.h"

Map::Map()
{
	CreateLocations();
}

void Map::CreateLocations()
{
	CreateHill();
	CreateRiver();
	CreateForest();
}

void Map::CreateHill()
{
	Location hill("Hambledon Hill");
	string text = "You are on a small hill and can see\n";
	text += "a forest to the north and a river to the south\n";
	hill.setDescription(text);

	
}

void Map::CreateRiver()
{
	Location river("River Stour");
	string text = "You are by a winding river and can see\n";
	text += "a small hill to the north\n";
	river.setDescription(text);

	river.setExit(Directions::North, hill);
}

void Map::CreateForest()
{
	Location forest("Epping Forest");
	string text = "You are in a deep dark forest and can see\n";
	text += "a small hill to the south\n";
	forest.setDescription(text);

	forest.setExit(Directions::South, hill);
	hill.setExit(Directions::North, forest);
}

void Map::EnterLocation(Directions)
{
	//currentLocation = nextLocation;
}

Location Map::getCurrentLocation()
{
	return currentLocation;
}

Location Map::getStartLocation()
{
	return *startLocation;
}
void Map::setStartLocation(Location start)
{
	startLocation = &start;
}



