#include<iostream>
#include<cstdlib>
#include<ctime>
#include"devil.cpp"

using namespace std;

int main(){

	int command,atk,hit;
	Devil devil;
	srand((unsigned) time (NULL));
	while(true){
		system("cls");
		cout<<"���� HP:"<<devil.GetHP()<<endl;
		cout<<"�v���C���[�̃^�[��"<<endl<<endl;
		cout<<"===================================="<<endl;

// �\�A��̓R���p�C�����ɃG�X�P�[�v�V�[�P���X�Ƃ��Ĉ����邱�Ƃ�����̂Œ��ӁI�i�΍�́A�Ώە����̎���\ ��t���邱�Ƃ��厖�j

		cout<<"1:�����O�\\�[�h�F�З�70�A����70%"<<endl;
		cout<<"2:�_�K�[�F�З�50�A����90% "<<endl;
		cout<<"===================================="<<endl;
		cout<<"Input command:";
		cin>>command;
		switch(command){
			case 1:atk=70,hit=70 ;break;
			case 2:atk=50,hit=90 ;break;
			default:atk=0,hit=0;  break;

		}
		if (command>=-1 &&command<=2){
			devil.Attacked(atk,hit);
			system("pause");
		}
		if (!devil.GetHP()) break;
	}
	return 0;
}
