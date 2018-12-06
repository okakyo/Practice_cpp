#pragma once

class Player{
	Status status;
	Command command;
public:
	Player():hp(300),mp(200),atk(0),hit(0){};
	int InputCommand();
	void Attacked(const int atk;const int hit;);
	int GetHP()  const{return hp;}
	int GetMP()  const{return mp;}
	int GetAtk() const{return atk;}
	int GetHit() const{return hit;}
};
