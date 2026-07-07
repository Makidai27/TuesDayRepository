/*CPUとの対戦ゲームとして3つの数字を当てましょう。
０～9までのランダムな数字を生成しましょう。
お互いに交互に入力し、場所と数字があっていたら「Hit」、外れていたら「Miss」を表示しましょう。3つ当たったら、勝利となります。
　※初期に手札に数字は重複しません。プレイヤーとCPUは重複しても大丈夫です。*/
#include<iostream>
#include"20260707_Header2_makidai.h"
using namespace std;

void Game()
{
	//変数宣言
	int i;
	int Player = 0, int Enemy = 0;
	int PlayerHand[INDEX] = {};
	int EnemyHand[INDEX] = {};
	int HitFlag;

	
	//乱数初期化
	srand((unsigned int)time(NULL));

	//入力チェック関数を呼び出し入力する
	InputCheck(MIN, MAX);
	cout << "===========================3つの数字当てゲーム============================" << endl;

	//プレイヤーとエネミーの手の生成
	for (i = 0; i < INDEX; i++)
	{
		PlayerHand[i] = rand() % (MAX + 1);
		EnemyHand[i] = rand() % (MAX + 1);
	}



}

int InputCheck(int min, int max)
{
	int num;

	while (true)
	{
		cin >> num;
		if (min > num || max < num)
		{
			cout << "入力した値に誤りがあります。再度入力してください\n";
		}
		else
		{
			break;
		}
	}
	return num;
}