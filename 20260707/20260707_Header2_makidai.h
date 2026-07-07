/*CPUとの対戦ゲームとして3つの数字を当てましょう。
０～9までのランダムな数字を生成しましょう。
お互いに交互に入力し、場所と数字があっていたら「Hit」、外れていたら「Miss」を表示しましょう。3つ当たったら、勝利となります。
　※初期に手札に数字は重複しません。プレイヤーとCPUは重複しても大丈夫です。*/
#pragma once
//定数
const int MAX = 9;
const int MIN = 0;
const int INDEX = 10;

void Gama();

int InputCheck(int min, int max);