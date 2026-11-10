#include "Character.h"
#include<iostream>
using namespace std;

//コンストラクタ
Character::Character()
{
	for (int i = 0; i < 3; i++)
	{
		hp[i] = 100;
	}
}

