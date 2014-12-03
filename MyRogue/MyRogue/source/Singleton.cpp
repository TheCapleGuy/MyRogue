#include "Singleton.h"

//Static Member
Singleton* Singleton::instance = 0;



Singleton::Singleton()
{
	dungeonWidth = 100, dungeonHeight = 100;
}
Singleton::~Singleton()
{
}

Singleton* Singleton::GetInstance()
{
	if (instance == 0)
	{
		instance = new Singleton();
	}
	return instance;
}

void Singleton::Test()
{

}