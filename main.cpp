#include"header/practice.h"

using namespace std;

int main(){
	int x=100;
	int *px=&x;
	Sample cat;
	Sample *pcat=&cat;
	cout<<"x�̃A�h���X�F"<<px<<endl;
	pcat-> SetName("�^�}");
	pcat->Meow();
return 0;
}
