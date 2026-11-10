#pragma once
class Character
{
private:
	int hp[3];
public:
	Character();
	void Attack(int damage);
	void ShowStatas()const;
};

