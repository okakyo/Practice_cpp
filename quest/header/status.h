#pragma once

class Player;
class Devil;
class StrayCat;
class Status{

	friend class Player;
	friend class Devil;
	friend class StrayCat;
	int hp;
	int mp;
	Status():hp(0),mp(0){}
};
