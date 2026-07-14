#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260714_QuesionHeader_oshiro.h"
using namespace std;
//関数→プレイヤーの投げる球の種類
void PitchingType(int pitching)
{
    switch (pitching)
    {
    case Straight:
        cout << "ストレート" << endl;
        break;

    case Curve:
        cout << "カーブ" << endl;
        break;

    case Slider:
        cout << "スライダー" << endl;
        break;

    case Sinker:
        cout << "シンカー" << endl;
        break;
    }
}
//結果を表示
void Result(int out)
{
    if (out >= OUT_COUNT)
    {
        cout << "PLAYER WINNER!!" << endl;
    }
    else
    {
        cout << "CPU WINNER!!" << endl;
    }
}
//入力チェック→入力された数字が当てはまっているか、当てはまっていなかったらもう一度入力
int InputCheck(int min, int max)
{
    int player;

    while (true)
    {
        cin >> player;

        if (player < PITCHING_MIN || player > PITCHING_MAX)
        {
            cout << "入力に誤りがあります。再入力してください。" << endl;
        }
        else
        {
            break;
        }
    }

    return player;
}