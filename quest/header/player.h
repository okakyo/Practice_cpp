#pragma once

class Player{
	int hp,mp,atk,hit;
public:
	Player():hp(300);mp(200);atk(0),hit(0){};
	int InputCommand();
	int GetHP  const{return hp;}
	int GetMP  const{return mp;}
	int GetAtk const{return atk;}
	int GetHit const{return hit;}
};
