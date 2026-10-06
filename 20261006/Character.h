#pragma once
class character
{
protected:
	int hp;
	int attck;
	int defense;
	int evasion;
public:

	/// <summary>
	/// コンストラクタ
	/// </summary>
	character();
	
	/// <summary>
	/// ステータス表示
	/// </summary>

	void ShowStatus();

	/// <summary>
	/// 攻撃
	/// </summary>

	void Attack(character& target);

	/// <summary>
	/// 回復
	/// </summary>

	//
	void Recovery();
	/// <summary>
	/// 生存判定
	/// </summary>
	///<param name="target">対象のキャラクターオブジェクト</param>
	
	bool IsAlive();
	/// <summary>
	/// HP取得
	/// </summary>

	
	int GetHp();

};

