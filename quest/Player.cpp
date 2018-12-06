#include<iostream>
#include"header/player.h"

using namespace std;

int Player::InputCommand(){

	cout<<"プレイヤーのターン"<<endl<<endl;
	cout<<"======================================="<<endl;

// ソ、一はコンパイル時にエスケープシーケンスとして扱われることがあるので注意！（対策は、対象文字の次に\ を付けることが大事）

	cout<<"1:ロングソ\ード：威力70、命中70%"<<endl;
	cout<<"2:ダガー：威力50、命中90% "<<endl;
	cout<<"3:ブリザド：威力80、命中75% MP 消費 50 "<<endl;
	cout<<"======================================="<<endl;
	cout<<"Input command:";
	cin>>command.command;
	switch(command.command){
		case 1:command.atk=70,command.hit=70 ;break;
		case 2:command.atk=50,command.hit=90 ;break;
		case 3:if(status.mp>=50){
		       	command.atk=80;
		       	command.hit=75; 
		       	status.mp-=50;}
		       else
			return 0;
		       break;
		default:return 0;

	}
	return command.command;
}

void Player::Attacked(const int atk,const int hit){
	if((rand()%100+rand()%100/2)<=hit){
		int damage=((status.hp-atk)<0)?status.hp:atk;
		cout<<"Hit!! プレイヤーに"<<damage<<"のダメージ"<<endl;
status.hp-=damage;
	}
	else cout<<"Miss!!"<<endl;
	if(!status.hp) cout<<"プレイヤーは倒れた"<<endl;
}
