#include<iostream>
#include"header/practice.h"

using namespace std;


void Sample::Meow() const{
	cout<<"�ɂ�[�A���l��"<<name<<"���[�I"<<endl;
}

int main(){
	Sample cat;
	cat.Meow();
return 0;
}
