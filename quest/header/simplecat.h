#pragma once 
#include<iostream>
#include<string>

using namespace std;

class SimpleCat{
	protected:
		string name;
	public:
		SimpleCat(){}
		SimpleCat(string n):name(n){}
		void setName(string n){name=n;}
		void Meow() const;

};
