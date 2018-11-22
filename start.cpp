#include "header/exz.h"

Rocket::Rocket():fuel(100),velocity(0),height(0){}

void Rocket::Accel(int volume){
	fuel-=volume;
	velocity+=volume;
	height+=velocity;
}

void Rocket::Repeat() const{

	cout<<"�󋵕�"<<endl;
	cout<<"�R��:"<<fuel<<endl;
	cout<<"���x"<<velocity<<endl;
	cout<<"���x"<<height<<endl;
	cout<<endl;
}

int main(){
	Rocket rocket;
	int volume;
	rocket.Repeat();
	cout<<"���˂���R���̗ʂ���͂��Ă��������B�F";	
	cin>>volume;
	rocket.Accel(volume);
	rocket.Repeat();
	if (rocket.GetFuel()>0){

	cout<<"�܂��R��������܂��B"<<endl;
	cout<<"������x���˂���R���̗ʂ���͂��Ă��������B�F"<<endl;
	cin>>volume;
	rocket.Accel(volume);
	rocket.Repeat();
	
	}
	
	cout<<"�I��"<<endl;
return 0;
}
