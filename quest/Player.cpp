#include<iostream>
#include"header/player.h"

using namespace std;

int Player::InputCommand(){

	int command,;
	cout<<"�v���C���[�̃^�[��"<<endl<<endl;
	cout<<"======================================="<<endl;

// �\�A��̓R���p�C�����ɃG�X�P�[�v�V�[�P���X�Ƃ��Ĉ����邱�Ƃ�����̂Œ��ӁI�i�΍�́A�Ώە����̎���\ ��t���邱�Ƃ��厖�j

	cout<<"1:�����O�\\�[�h�F�З�70�A����70%"<<endl;
	cout<<"2:�_�K�[�F�З�50�A����90% "<<endl;
	cout<<"2:�u���U�h�F�З�80�A����75% MP ���� 50 "<<endl;
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
