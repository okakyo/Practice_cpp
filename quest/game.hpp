#pragma once
#include<iostream>
#include<cstdlib>
#include"player.cpp"
#include"Devil.cpp"

using namespace std;

class Game{
	Player player;
	Devil devil;
public:
	enum CheckCommand{
		CONTINUE =0,
		INVALID_COMMAND,
		BATTLE_END,
		END,
	};
	Game();
	void Play();
	int Attack_Player();
	void ShowStatus();
private:
	void Ending();
};

Game::Game(){
	cout<<"魔王が現れた！"<<endl<<endl;
	system("pause");
}

void Game::Play(){
	while(true){
		system("cls");
		if(Attack_Player()==BATTLE_END)
			break;
	}
}

int Game::Attack_Player(){
	ShowStatus();
	if(player.InputCommand())
		devil.Attacked(player.GetAtk(),player.GetHit());
	else return INVALID_COMMAND;
	if(!devil.GetHP()){
	Ending();
	return BATTLE_END;
	}	
	system("pause");
	return CONTINUE;
}

void Game::ShowStatus(){

	cout<<"プレイヤー　HP"<<player.GetHP()<<"MP"<<player.GetMP()<<endl;
	cout<<"魔王　HP"<<devil.GetHP()<<"MP"<<devil.GetMP()<<endl<<endl;
}

void Game::Ending(){
	cout<<"プレイヤーの勝利！！"<<endl<<endl;
}

