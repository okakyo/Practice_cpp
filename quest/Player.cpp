#include<iostream>
#include"header/player.h"

using namespace std;

int Player::InputCommand(){

	cout<<"�v���C���[�̃^�[��"<<endl<<endl;
	cout<<"======================================="<<endl;

// �\�A��̓R���p�C�����ɃG�X�P�[�v�V�[�P���X�Ƃ��Ĉ����邱�Ƃ�����̂Œ��ӁI�i�΍�́A�Ώە����̎���\ ��t���邱�Ƃ��厖�j

	cout<<"1:�����O�\\�[�h�F�З�70�A����70%"<<endl;
	cout<<"2:�_�K�[�F�З�50�A����90% "<<endl;
	cout<<"3:�u���U�h�F�З�80�A����75% MP ���� 50 "<<endl;
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
		cout<<"Hit!! �v���C���[��"<<damage<<"�̃_���[�W"<<endl;
status.hp-=damage;
	}
	else cout<<"Miss!!"<<endl;
	if(!status.hp) cout<<"�v���C���[�͓|�ꂽ"<<endl;
}
