#include<iostream>

using namespace std;

int main(){

	int (input);
	cout<<"0,1のいづれかを入力してください。";
	cin>>input;
	try{
		if(input==1) throw 1;
		else if(input==0) throw 0;
		throw "Error !";		
		cout<<"これは実行されません"<<endl;}
	catch(int i){
	cout<<input<<"が入力されました。"<<endl;
	}
	catch(...){
	cout<<"Error!! 0,1のいづれかを入力してください。"<<endl;
	}
return 0;
}
