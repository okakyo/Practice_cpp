#include<iostream>
#include<cstdlib>
#include<ctime>
#include"devil.cpp"

using namespace std;

int main(){

	int command,atk,hit;
	Devil devil;
	srand((unsigned) time (NULL));
	while(true){
		system("cls");
		cout<<"魔王 HP:"<<devil.GetHP()<<endl;
		cout<<"プレイヤーのターン"<<endl<<endl;
		cout<<"===================================="<<endl;

// ソ、一はコンパイル時にエスケープシーケンスとして扱われることがあるので注意！（対策は、対象文字の次に\ を付けることが大事）

		cout<<"1:ロングソ\ード：威力70、命中70%"<<endl;
		cout<<"2:ダガー：威力50、命中90% "<<endl;
		cout<<"===================================="<<endl;
		cout<<"Input command:";
		cin>>command;
		switch(command){
			case 1:atk=70,hit=70 ;break;
			case 2:atk=50,hit=90 ;break;
			default:atk=0,hit=0;  break;

		}
		if (command>=-1 &&command<=2){
			devil.Attacked(atk,hit);
			system("pause");
		}
		if (!devil.GetHP()) break;
	}
	return 0;
}
