#include"header/practice.h"

using namespace std;

int main(){
	int x=100;
	int *px=&x;
	x=200;
	cout<<"x�̓��e�F"<<*px<<endl;
	x=400;
	cout<<"x�̓��e�F"<<x<<endl;
return 0;
}