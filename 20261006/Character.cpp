#include "character.h"
#include"Connfig.h"

#include<iostream>
#include<cstdlib>

using namespace std;


character::character()
{
	hp = Config::MAX_HP;

	attck = rand() % (Config::MAX_STATUS - Config::MIN_STATUS + 1) + Config::MIN_STATUS;
	defense = rand() % (Config::MAX_STATUS - Config::MIN_STATUS + 1) + Config::MIN_STATUS;
	evasion = rand() % (Config::MAX_STATUS - Config::MIN_STATUS + 1) + Config::MIN_STATUS;
}

//ステータス表示
void Character::ShowStatus()
{
	cout << "HP：" << hp << endl;
	cout << "攻撃力：" << attck << endl;
	cout << "防御力：" << defense << endl;
	cout << "回避力：" << evasion << endl;
}
//攻撃
void Character::Attack(Character& target)
{
	//ランダムな攻撃値
	int randomValue = rand() % (Config::MAX_RANDOM_VALUE - Config::MIN_RANDOM_VALUE + 1) + Config::MIN_RANDOM_VALUE;
	int attackValue = attck + randomValue;
	cout << "攻撃値は" << attackValue << endl;

	//回避判定
	if (attackValue <= target, evasion)
	{

	}
}