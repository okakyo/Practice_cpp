#pragma once 

#include<iostream>
#include<string>

using namespace std;

class SimpleCat{
	string name;
	public:
		SimpleCat()=default; //�f�t�H���g�R���X�g���N�^
		SimpleCat(string n):name(n){} //�R���X�g���N�^
		void SetName(string n){name=n;}
		void Meow() const;
};
