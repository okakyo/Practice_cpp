#include"SimpleCat.h"

void SimpleCat::Meow() const{

	cout<<"�ɂ�[�I���̖���"<<name<<"���I"<<endl;
}

int main(){
	SimpleCat tama;
	SimpleCat marimo("�܂��"); //�R���X�g���N�^�̒�`�@
	tama.Meow();
	marimo.Meow();
	tama.SetName("�^�}");
	tama.Meow();
return 0;
}