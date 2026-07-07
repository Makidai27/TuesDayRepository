/*以下の内容に沿ったプログラムを作成してください。

10 個の数値を入力する。
入力された数値を偶数（even）と奇数配列（odd）に分類して表示する。
数字を入れる配列は関数にして配列を渡しましょう。*/
#include<iostream>
#include"20260707_Header1_makidai.h"
using namespace std;

int main(void)
{
	//配列
	int arry[INDEX] = {};
	//配列に追加する
	cout << "10個の数値を入力する.\n";
	//配列へ入力する関数を呼び出します
	AddArray(arry, INDEX);
	//偶数と奇数を振り分ける
	cout << "偶数 : " << endl;

	for (int i = 0; i < INDEX; i++)
	{
		if (arry[i] % 2 == 0)
		{
			cout << arry[i] << "\n";
		}
	}

	cout << "奇数 : " << endl;
	for (int i = 0; i < INDEX; i++)
	{
		if (arry[i] % 2 == 0)
		{
			cout << arry[i] << "\n";
		}
	}

	return 0;
}
