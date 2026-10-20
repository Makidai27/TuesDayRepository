#pragma once
class Sorcerer
{
public:
	int hp;
	int juryoku;

	//ã§í 
	virtual void ShowStatus();
	//îhê∂ÉNÉâÉX
	virtual void  UseTechnique() = 0;
};

