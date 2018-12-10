#ifndef __EXZ__H__IDENTIFIED__
#define __EXZ__H__IDENTIFIED__

#include<iostream>
#include<fstream>

using namespace std;

class Rocket{
	int fuel;
	int velocity;
	int height;
public :
	Rocket();
	Rocket(int fuel, int velocity, int height);
	~Rocket();
	void Accel(int volume);
	void Repeat() const;
	int GetFuel() const{return fuel;}
	void SaveData() const;

	

};
#endif