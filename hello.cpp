#include "header/exz.h"

Rocket::Rocket():fuel(100),velocity(0),height(0){}

void Rocket::SaveData() const{

	ofstream f("savedata.txt");
	if (!f){
	cerr<<"�t�@�C���I�[�v���Ɏ��s"<<endl;
	return;
	}

	f<<fuel<<endl;
	f<<velocity<<endl;
	f<<height<<endl;
	cout<<"�f�[�^���Z�[�u���܂����B"<<endl;

}

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
Rocket::~Rocket(){
	cout<<"Rocket�͔j������܂����B"<<endl;
}

int main(){
	Rocket rocket;
	int volume;
	rocket.Repeat();
	while (rocket.GetFuel()>0){

		cout<<"���˂���R���̗ʂ���͂��Ă��������B�F";	
		cin>>volume;
		rocket.Accel(volume);
		rocket.Repeat();	
		rocket.SaveData();
	}
	
	cout<<"�I��"<<endl;
return 0;
}
