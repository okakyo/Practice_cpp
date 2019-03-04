#pragma once 

#include<iostream>
#include<string>

using namespace std;

class SimpleCat{
	string name;
	public:
		SimpleCat()=default; //デフォルトコンストラクタ
		SimpleCat(string n):name(n){} //コンストラクタ
		void SetName(string n){name=n;}
		void Meow() const;
};
