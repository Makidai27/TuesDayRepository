/*問題：
ポインターを使用して、関数からプレイヤーのHPを変更するプログラムを作成してください。
仕様：
プレイヤーのHPを次のように設定します。
int hp = 100;
その後、以下の2つの関数を作成してください。
① ダメージ関数
Damage関数を作成し、プレイヤーのHPを20減らしてください。
Damage関数を呼び出す ↓ HPが20減少する
② 回復関数
Heal関数を作成し、プレイヤーのHPを30増加させてください。
Heal関数を呼び出す ↓ HPが30増加する
条件：
HPはmain関数で管理すること
Damage関数とHeal関数を作成すること
HPを変更するためにポインターを使用すること
関数の引数にHPのアドレスを渡すこと
Damage関数ではHPを20減らすこと
Heal関数ではHPを30増やすこと
最終的なHPを画面に表示すること
*/
#include<iostream>
using namespace std;

void Damage(int *hp)
{
	*hp -= 20;
}

void Heal(int* hp)
{
	*hp += 30;
}

int main()
{
	int hp = 100;
	int* playerHp = &hp;

	cout << "HP" << *playerHp << endl;
	Damage(&hp);
	cout << "HP" << *playerHp << endl;
	Heal(&hp);
	cout << "HP" << *playerHp << endl;

	return 0;
}