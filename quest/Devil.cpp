#include<iostream>
#include"header/Devil.h"


using namespace std;

void Devil::Attacked(const int atk,const int hit){

	if(((rand()%100+rand()%100)/2)<hit){
		int damage=((hp-atk)<0)? hp:atk;
		cout<<"Hit! –‚‰¤‚É"<<damage<<"‚Ìƒ_ƒ[ƒW"<<endl;
		hp-=damage;}
	else cout<<"Miss"<<endl;

	if(!hp)cout<<"–‚‰¤‚Í“|‚³‚ê‚½"<<endl;}
