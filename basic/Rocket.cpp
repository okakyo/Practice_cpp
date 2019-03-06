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
	cout<<"燃料："<<fuel<<endl;
	cout<<"速度："<<velocity<<endl;
	cout<<"高度："<<height<<endl;
	cout<<endl;
}

int main(){
	int volume=10;
	Rocket rocket;
	int your_fuel=rocket.GetFuel();
	cout<<"ロケットを打ち上げます。"<<endl;
	cout<<endl;
	while(your_fuel>0){
	if(your_fuel-volume<=0){
		rocket.Accel(your_fuel);
		rocket.Repeat();
		cout<<"これで終了します。"<<endl;
		break;
	}
	rocket.Accel(volume);
	rocket.Repeat();
	your_fuel=rocket.GetFuel();
	}
		
return 0;
}
