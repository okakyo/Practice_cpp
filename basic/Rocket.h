#pragma once

class Rocket{
	int fuel;
	int velocity;
	int height;

	public:
		Rocket();
		Rocket(int f,int v,int h){}
		void Accel(int volume);
		void Repeat() const;
		int GetFuel() const {return fuel;}


};
