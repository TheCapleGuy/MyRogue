#ifndef _CAVEGENERATOR_H_
#define _CAVEGENERATOR_H_
#include "Singleton.h"
#include <vector>

class Cells
{
public:
	void InitCells();

protected:
	int x, y, width, height;
};
std::vector<Cells> Rooms;
#endif