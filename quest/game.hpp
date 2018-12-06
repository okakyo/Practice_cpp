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
	cout<<"���������ꂽ�I"<<endl<<endl;
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

	cout<<"�v���C���[�@HP"<<player.GetHP()<<"MP"<<player.GetMP()<<endl;
	cout<<"�����@HP"<<devil.GetHP()<<"MP"<<devil.GetMP()<<endl<<endl;
}

void Game::Ending(){
	cout<<"�v���C���[�̏����I�I"<<endl<<endl;
}

