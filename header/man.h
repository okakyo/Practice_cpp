#pragma once

#include<iostream>
#include<string>

using namespace std;

class Man{
	string name;
public:
	void SetName(string n){name=n;}
	string GetName() const {return name;}
	void InputData();
	void ShowData();const

};
