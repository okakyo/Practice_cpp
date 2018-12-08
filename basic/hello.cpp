#include "header/exz.h"

Rocket::Rocket():fuel(100),velocity(0),height(0){}

void Rocket::SaveData() const{

	ofstream f("savedata.txt");
	if (!f){
	cerr<<"ファイルオープンに失敗"<<endl;
	return;
	}

	f<<fuel<<endl;
	f<<velocity<<endl;
	f<<height<<endl;
	cout<<"データをセーブしました。"<<endl;

}

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
Rocket::~Rocket(){
	cout<<"Rocketは破棄されました。"<<endl;
}

int main(){
	Rocket rocket;
	int volume;
	rocket.Repeat();
	while (rocket.GetFuel()>0){

		cout<<"噴射する燃料の量を入力してください。：";	
		cin>>volume;
		rocket.Accel(volume);
		rocket.Repeat();	
		rocket.SaveData();
	}
	
	cout<<"終了"<<endl;
return 0;
}
