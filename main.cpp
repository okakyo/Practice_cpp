#include"header/practice.h"

using namespace std;

int main(){
	int x=100;
	int *px=&x;
	x=200;
	cout<<"xの内容："<<*px<<endl;
	x=400;
	cout<<"xの内容："<<x<<endl;
return 0;
}
