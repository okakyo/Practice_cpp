#pragma once

class Player;
class Devil;

//friend class (�N���X��):
//private �ȃ����o�ł����Ă��A(�N���X��)�̃N���X���玩�R�ɃA�N�Z�X���邱�Ƃ������邽�߂̖��߁B�i�d�v�j

class Command{

	friend class Player;
	friend class Devil;
	int command;
	int atk;
	int hit;
	Command():command(0),atk(0),hit(0){}
};
