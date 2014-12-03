#pragma once
#include <iostream>



class Singleton
{
public:
	static Singleton* GetInstance();
	void Test();
	int dungeonWidth, dungeonHeight;
	~Singleton();
protected:
	Singleton();
	static Singleton* instance;
};