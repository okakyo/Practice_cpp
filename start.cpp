#include "header/exz.h"

Rocket::Rocket():fuel(100),velocity(0),height(0){}

void Rocket::Accel(int volume){
	fuel-=volume;
	velocity+=volume;
	height+=velocity;
}

void Rocket::Repeat() const{

	cout<<"状況報告"<<endl;
	cout<<"燃料:"<<fuel<<endl;
	cout<<"速度"<<velocity<<endl;
	cout<<"高度"<<height<<endl;
	cout<<endl;
}

int main(){
	Rocket rocket;
	int volume;
	rocket.Repeat();
	cout<<"噴射する燃料の量を入力してください。：";	
	cin>>volume;
	rocket.Accel(volume);
	rocket.Repeat();
	if (rocket.GetFuel()>0){

	cout<<"まだ燃料があります。"<<endl;
	cout<<"もう一度噴射する燃料の量を入力してください。："<<endl;
	cin>>volume;
	rocket.Accel(volume);
	rocket.Repeat();
	
	}
	
	cout<<"終了"<<endl;
return 0;
}
