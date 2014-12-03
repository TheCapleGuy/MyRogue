// MyRogue.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "CaveGenerator.h"
#include "Time.h"
void DestroySingleton();

Singleton* DungManager = Singleton::GetInstance();

int _tmain(int argc, _TCHAR* argv[])
{
	srand(time(NULL));

	return 0;
}

void DestroySingleton()
{
	delete DungManager;
}