#include<iostream>
#include"header/practice.h"

using namespace std;


void Sample::Meow() const{
	cout<<"にゃー、俺様は"<<name<<"だー！"<<endl;
}

int main(){
	Sample cat;
	cat.Meow();
return 0;
}
