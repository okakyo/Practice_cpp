#include<iostream>
#include"header/Devil.h"

using namespace std;

int Devil::InputCommand(){
	command.command=(status.mp<60)?rand()%2+1:rand()%4+1;
	switch(command.command){
		case 1:
			command.atk=100;
			command.hit=60;
			cout<<"魔王は剣でプレイヤーを攻撃!!"<<endl;
		case 2:
			command.atk=80;
			command.hit=80;
			cout<<"魔王は爪でプレイヤーを攻撃!!"<<endl;
		case 3:
			command.atk=90;
			command.hit=75;
			status.mp-=60;
			cout<<"魔王はファイアでプレイヤーを攻撃!!"<<endl;
		case 4:
			command.atk=150;
			command.hit=40;
			status.mp-=70;
			cout<<"魔王はサンダーでプレイヤーを攻撃!!"<<endl;
	}
return command.command;

}

void Devil::Attacked(const int atk,const int hit){

	if(((rand()%100+rand()%100)/2)<hit){
		int damage=((status.hp-atk)<0)? status.hp:atk;
		cout<<"Hit! 魔王に"<<damage<<"のダメージ"<<endl;
		status.hp-=damage;}
	else cout<<"Miss"<<endl;

	if(!status.hp)cout<<"魔王は倒された"<<endl;}
