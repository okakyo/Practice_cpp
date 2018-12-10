#ifndef __SAMPLE_H_INCLUDED__
#define __SAMPLE_H_INCLUDED__

#include<iostream>
#include<string>

using namespace std;

class Sample{
	string name="É~ÉP";
public:
	Sample()=default;
	Sample(string n):name(n){}
	void SetName(string n){name=n;}
	void Meow() const;
};






#endif
