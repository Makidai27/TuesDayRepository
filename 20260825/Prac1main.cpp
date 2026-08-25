/*
Dog クラスのインスタンスを作成する。
Name で名前を設定する。
ShowProfile メソッドで名前を表示する。
メイン関数にてDogクラスをオブジェクト化してください。
*/
#include<iostream>
#include"Dog.h"

using namespace std;

int main()
{
	Dog dog;

	dog.Name = "ぽち";

	dog.ShowProfile();
	return 0;
}