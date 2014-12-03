#include "CaveGenerator.h"
#include "Singleton.h"



/*giving the cell a random location dungeons area
random size between 1x1 and 15x15*/
void Cells::SetRoomValues()
{
	x = 0, y = 0;
	width = rand() % 20 + 3, height = rand() % 20 + 3;
	xEnd = x + width;
	yEnd = y + height;
	isItUsed = true;
}

void Cells::InitCells(std::vector<Cells> roomVector)
{
	roomVector.emplace_back();
	roomVector.back().SetRoomValues();
}

void LevelGen::PopulateRooms(std::vector<Cells>& roomVector)
{
	widthLimit = 150, heightCounter = 0, widthCounter = 0;

	// arrange row
	for (int j = 0, k = 0; j < roomVector.size() && k < 2; j++)		
	{
		if (widthCounter < widthLimit)
		{
			// assign room lcoation
			roomVector[j].x += widthCounter;
			roomVector[j].y += heightCounter;

			// add offset
			widthCounter += roomVector[j].width + 10;
		}
		else
		{
			// reset counter
			widthCounter = 0;
			heightCounter = 25;

			// assign current room on next row
			roomVector[j].x = widthCounter;
			roomVector[j].y += heightCounter;
			k++;
		}
	}
	//getting rid of all bad rooms
	for (int i = 0; i < roomVector.size(); i++)
	{
		//checking if the room got populated
		if (roomVector[i].y = 0 && roomVector[i].x == 0)
		{
			roomVector[i].isItUsed = false;
		}
		/*not using rooms that are "too long"
		if x is smaller than y by 10 or vice versa*/
		if ((roomVector[i].x + 10 < roomVector[i].y) || (roomVector[i].y + 10 < roomVector[i].x))
		{
			roomVector[i].isItUsed = false;
		}
	}

}
