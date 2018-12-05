#include<iostream>
#include<cstdlib>
#include<ctime>
#include"devil.cpp"
#include"player.cpp"

using namespace std;

int main(){

	int command,atk,hit;
	Devil devil;
	Player player;
	srand((unsigned) time (NULL));
	while(true){
		system("cls");
		cout<<"プレイヤー　HP"<<player.GetHP()<<endl;
		cout<<"魔王　HP"<<devil.GetHP()<<endl;
		if (player.InputCommand()){
			devil.Attacked(player.GetAtk(),player.GetHit());
			system("pause");
		}
		if (!devil.GetHP()) break;
	}
	return 0;
}
