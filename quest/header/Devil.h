#pragma once 
class Devil{
	int hp,mp;
	public:
	Devil():hp(500),mp(300){}
	void Attacked( const int atk,const int hit);
	int GetHP() const {return hp;}
	int GetMP() const {return mp;}
};
