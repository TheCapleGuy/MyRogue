#pragma once
#include <iostream>


class Singleton
{
public:
	static Singleton* GetInstance();
	void Test();
	int dungeonWidth, dungeonHeight;
	~Singleton();
	int RandNum();
protected:
	Singleton();
	static Singleton* instance;
};