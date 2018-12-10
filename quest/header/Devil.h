#pragma once
#include<string>
#include"status.h"
#include"command.h"
using namespace std;


class Devil{
	string name;
	Status status;
	Command command;

public:
	Devil():name("����"){status.hp=500;status.mp=300;}
	int InputCommand();
	void Attacked(const int atk,const int hit);
	int GetHP() const {return status.hp;}
	int GetMP() const {return status.mp;}
	int GetAtk() const {return command.atk;}
	int GetHit() const {return command.hit;}
	void SetName(string n){name=n;}
	string GetName(){return name;}
};
