#include"Rocket.h"
#include<iostream>

using namespace std;

Rocket::Rocket():fuel(100),velocity(0),height(0){}
void Rocket::Accel(int volume){
	fuel-=volume;
	velocity+=volume;
	height+=velocity;
}

void Rocket::Repeat() const {
	cout<<"�R���F"<<fuel<<endl;
	cout<<"���x�F"<<velocity<<endl;
	cout<<"���x�F"<<height<<endl;
	cout<<endl;
}

int main(){
	int volume=10;
	Rocket rocket;
	int your_fuel=rocket.GetFuel();
	cout<<"���P�b�g��ł��グ�܂��B"<<endl;
	cout<<endl;
	while(your_fuel>0){
	if(your_fuel-volume<=0){
		rocket.Accel(your_fuel);
		rocket.Repeat();
		cout<<"����ŏI�����܂��B"<<endl;
		break;
	}
	rocket.Accel(volume);
	rocket.Repeat();
	your_fuel=rocket.GetFuel();
	}
		
return 0;
}
