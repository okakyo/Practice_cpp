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
	for(int i=0;i<3;i++){
		rocket.Repeat();
		rocket.Accel(10);
	
	}	
return 0;
}
