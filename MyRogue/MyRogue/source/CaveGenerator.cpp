#include "CaveGenerator.h"


Singleton* DungManager = Singleton::GetInstance();
void Cells::InitCells()
{
	//making 20 rooms
	for (int i = 0; i < 20; i++)
	{
		//giving the cell a random location dungeons area
		//random size between 1x1 and 15x15
		Rooms[i].x = rand() % 1 + DungManager->dungeonWidth, Rooms[i].y = rand() % 1 + DungManager->dungeonHeight,
			Rooms[i].width = rand() % 1 + 15, Rooms[i].height = rand() % 1 + 15;
	}

}