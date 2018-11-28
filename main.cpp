#include"header/practice.h"

using namespace std;

int main(){
	int x=100;
	int *px=&x;
	Sample cat;
	Sample *pcat=&cat;
	cout<<"xのアドレス："<<px<<endl;
	pcat-> SetName("タマ");
	pcat->Meow();
return 0;
}
