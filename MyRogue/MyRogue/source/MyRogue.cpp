#include "Time.h"
#include <cstdlib>
#include "Singleton.h"

void SeedRooms(int roomCount);

LevelGen Level;

int main(int argc, char * argv[])
{
	Singleton * roomMan = Singleton::GetInstance();
	srand(time(NULL));

	SeedRooms(20);
	Level.PopulateRooms(roomMan->Rooms);
	

	for (int i = 0; i < 20; i++)
	{
		std::cout << i << std::endl;
		std::cout << "Location: " << roomMan->Rooms[i].x << ", " << roomMan->Rooms[i].y << std::endl;
		std::cout << "Size: " << roomMan->Rooms[i].xEnd << ", " << roomMan->Rooms[i].yEnd << std::endl;
		std::cout << "Is it used?: " << roomMan->Rooms[i].isItUsed << std::endl;
	}


	delete roomMan;
	system("Pause");
	return 0;
}


void SeedRooms(int roomCount)
{
	Singleton * seed = Singleton::GetInstance();
	for (int i = 0; i < roomCount; i++)
	{
		seed->Rooms.emplace_back();
		seed->Rooms.back().SetRoomValues();
	}
}