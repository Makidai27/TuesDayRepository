#include <iostream>
#include <cstdlib>
#include <ctime>
#include "20260714_QuesionHeader_oshiro.h"
using namespace std;


//====================================
// メイン
//====================================
int main()
{
    //変数メインで使うやつ
    int player;
    int cpu;
    int probability;

    int strike = 0;
    int ball = 0;
    int out = 0;
    int hit = 0;

    srand((unsigned int)time(nullptr));

    cout << "野球盤ゲームスタートです" << endl;
    cout << "プレイヤーはピッチャーとなり、この回を守り切ってください" << endl;

    do
    {
        //投げる球の入力
        cout << endl;
        cout << "投げる球を選んでください" << endl;
        cout << "0:ストレート" << endl;
        cout << "1:カーブ" << endl;
        cout << "2:スライダー" << endl;
        cout << "3:シンカー" << endl;

        player = InputCheck(PITCHING_MIN, PITCHING_MAX);

        PitchingType(player);//ピッチャーはプレイヤー

        cpu = rand() % PROBABILITY;//敵の数字はランダム

        probability = rand() % PROBABILITY;

        
        if (player != cpu)
        {
            //プレイヤーの入力した数字が敵と違っていたら半分の確率でボールもしくはストライクになる判定
            if (probability == 0)
            {
                cout << "ボール！" << endl;
                ball++;
            }
            else
            {
                cout << "ストライク！！" << endl;
                strike++;
            }
        }
        else
        {
            //入力した数字がバッターと同じで打たれたときにアウトかヒットの判定
            strike = 0;
            ball = 0;

            if (probability == 1)
            {
                //アウトなら
                cout << "OUT!!" << endl;
                out++;
            }
            else
            {
                //ヒットならランナー１
                cout << "HIT!!" << endl;
                hit++;
            }
        }


        if (strike >= STRIKE_COUNT || ball >= BALL_COUNT)
        {
            if (strike >= STRIKE_COUNT)
            {
                //ストライクの数が３になったらアウトの判定
                cout << "三振アウト！" << endl;
                out++;
            }
            else
            {
                //ボールの数が４になったらヒットの判定
                cout << "フォアボール！" << endl;
                hit++;
            }

            strike = 0;
            ball = 0;
        }
        //最終的なスコアがどのくらいか出す
        cout << endl;
        cout << "B : " << ball << endl;
        cout << "S : " << strike << endl;
        cout << "O : " << out << endl;
        cout << "Runner : " << hit << endl;

    } while (out < OUT_COUNT && hit < HIT_COUNT);

    //結果を繰り返す
    Result(out);

    return 0;
}