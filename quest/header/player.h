#pragma once
#include"status.h"
#include"command.h"


class Player{
	Status status;
	Command command;
public:
	Player(){status.hp=300;status.mp=300;};
	int InputCommand();
	void Attacked(const int atk,const int hit);
	int GetHP()  const{return status.hp;}
	int GetMP()  const{return status.mp;}
	int GetAtk() const{return command.atk;}
	int GetHit() const{return command.hit;}
};
