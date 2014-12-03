#ifndef _SINGLETON_H_
#define _SINGLETON_H_

#include <iostream>
#include <vector>

#include "CaveGenerator.h"

class Singleton
{
public:
	static Singleton* GetInstance();
	void Test();
	int roomSpawnWidth, roomSpawnHeight;
	~Singleton();

	std::vector<Cells> Rooms;

protected:
	Singleton();
	static Singleton* instance;

};

#endif
