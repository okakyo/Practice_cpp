#pragma once

class Player;
class Devil;

class Status{

	friend class Player;
	friend class Devil;
	int hp;
	int mp;
	Status():hp(0),mp(0){}
};
