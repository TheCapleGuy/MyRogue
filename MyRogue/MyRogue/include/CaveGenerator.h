#ifndef _CAVEGENERATOR_H_
#define _CAVEGENERATOR_H_

#include <vector>



class Cells
{
public:
	Cells(){};
	~Cells(){};
	void SetRoomValues();
	void InitCells(std::vector<Cells> roomVector);
	int x, y, width, height, xEnd, yEnd;
	bool isItUsed;

};

class LevelGen
{
public:
	LevelGen(){};
	~LevelGen(){};
	void PopulateRooms(std::vector<Cells>& roomVector);
	int widthLimit, heightCounter, widthCounter;

};

#endif