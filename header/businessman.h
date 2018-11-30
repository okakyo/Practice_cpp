#pragma once 
#include<man.h>
class Businessman public Man{

	int salaly;

public:
	void SetSalaly(int n){salaly=n;}
	void GetSalaly() const {return salaly}
	void InputData();
	void ShowData() const;
	int Income() const {return salaly*12}
};
