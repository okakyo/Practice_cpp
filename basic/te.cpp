#include<iostream>

using namespace std;

int main(){

	int (input);
	cout<<"0,1�̂��Âꂩ����͂��Ă��������B";
	cin>>input;
	try{
		if(input==1) throw 1;
		else if(input==0) throw 0;
		throw "Error !";		
		cout<<"����͎��s����܂���"<<endl;}
	catch(int i){
	cout<<input<<"�����͂���܂����B"<<endl;
	}
	catch(...){
	cout<<"Error!! 0,1�̂��Âꂩ����͂��Ă��������B"<<endl;
	}
return 0;
}