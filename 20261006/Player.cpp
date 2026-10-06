#include "Player.h"
#include"Connfig.h"

#include<iostream>
using namespace std;

//コンストラクタ
Player::Player():character(){}

//プレイヤーの行動
void Player::Action(character& target)
{
	int choice;

	cout << "\n【プレイヤーのターン】" << "1:攻撃\n2:回復\n" << ">>" << endl;

	while (true)
	{
		cin >> choice;
		if (Config::ACTION_ATTACK < choice || Config::ACTION_RECOVERY < choice) 
		{
			cout << "不正な数字が入力されています。再度入力してください。" << endl;
		}
		else
		{
			break;
		}
	}

	if (choice == Config::ACTION_ATTACK)
	{
		Atta
	}
}
