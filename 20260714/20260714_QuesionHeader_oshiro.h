#pragma once

//定数
const int PITCHING_MIN = 0;//ピッチャーの最小値
const int PITCHING_MAX = 3;//ピッチャーの最大値
const int PROBABILITY = 4;

const int STRIKE_COUNT = 3;//ストライクのカウント
const int BALL_COUNT = 4;//ボールのカウント
const int OUT_COUNT = 3;//アウトのカウント
const int HIT_COUNT = 4;//ヒットのカウント

//球の種類
enum PitchType
{
	Straight,
	Curve,
	Slider,
	Sinker
};

void PitchingType(int pitching);//ピッチャーの球種の種類

void Result(int out);//お互いの結果を常に表示

int InputCheck(int min, int max);//入力された数の最少と最大値

