#pragma once 
#include"SimpleCat.h"
#include"Status.h"
#include"Command.h"

using namespace std;

class StrayCat:public SimpleCat{
	
	Status status;
	Command command;
public:
	StrayCat(){SimpleCat::setName("StrayCat");
		status.hp=800;status.mp=300;
	}
	int InputCommand();
	void Attacked(const int atk,const int hit);
	int GetHP() const {return status.hp;}
	int GetMP() const {return status.mp;}
	int GetAtk() const {return command.atk;}
	int GetHit() const {return command.hit;}
	string GetName()const {return name;}

};
