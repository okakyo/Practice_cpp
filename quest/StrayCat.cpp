#include"header/straycat.h"

int StrayCat::InputCommand(){
	command.command=rand()%2+1;
	switch(command.command){
		case 1:
			command.atk=30;
			command.hit=60;
			cout<<name<<"�͐K���ōU��!!"<<endl;
			break;

		case 2:
			command.atk=120;
			command.hit=40;
			cout<<name<<"�̓L�b�N�ōU��!!"<<endl;
			break;
	}
	return command.command;
}

void StrayCat::Attacked(const int atk, const int hit){
	if((rand()%100+rand()%100/2)<=hit){
		int damage=((status.hp-atk)<0)?status.hp:atk;
		cout<<"Hit!!"<<name<<"��"<<damage<<"�̃_���[�W"<<endl;
		status.hp-=damage;
	}
	else
		cout<<"Miss!"<<endl;
	if(!status.hp)
		cout<<name<<"�͓|�ꂽ"<<endl;

}
