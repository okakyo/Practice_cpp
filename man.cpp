#include<header/man.h>

void Man::InputData(){

	cout<<"氏名を入力してください。";
	cin>>name;

}
void Man::ShowData() const{

	cout<<"氏名："<<name<<endl;
}
