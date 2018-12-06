#pragma once
#include"status.h"
#include"command.h"

class Devil{
	Stautus status;
	Command command;

public:
	Devil():{status.hp=500;status.mp=300;}
	int InputCommand();
	void Attacked(const int atk,const int hit);
	int GetHP() const {return hp;}
	int GetMP() const {return mp;}
	int GetAtk() const {return atk;}
	int GetHit() const {return hit;}

};
