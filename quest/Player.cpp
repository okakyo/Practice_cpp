#include<iostream>
#include"header/player.h"

using namespace std;

int Player::InputCommand(){

	int command,;
	cout<<"プレイヤーのターン"<<endl<<endl;
	cout<<"======================================="<<endl;

// ソ、一はコンパイル時にエスケープシーケンスとして扱われることがあるので注意！（対策は、対象文字の次に\ を付けることが大事）

	cout<<"1:ロングソ\ード：威力70、命中70%"<<endl;
	cout<<"2:ダガー：威力50、命中90% "<<endl;
	cout<<"2:ブリザド：威力80、命中75% MP 消費 50 "<<endl;
	cout<<"======================================="<<endl;
	cout<<"Input command:";
	cin>>command;
	switch(command){
		case 1:atk=70,hit=70 ;break;
		case 2:atk=50,hit=90 ;break;
		case 3:
		       if(mp>=50){
		       atk=80;hit=75; mp-=50}
		       else return 0;
		default:return 0;

	}
	return command;
}
