#include"Gojo.h"
#include"Inumaki.h"
#include"Megumi.h"
#include<iostream>

int main(void)
{
	Gojo gojo;
	Inumaki inumaki;
	Megumi megumi;

	Sorcerer* sorcerer[3] = { &gojo,&inumaki,&megumi };

	for (int i = 0; i < 3; i++)
	{

		sorcerer[i]->ShowStatus();
		sorcerer[i]->UseTechnique();
	}
	return 0;
}