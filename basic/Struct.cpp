#include<iostream>

using namespace std;

struct Point{
	int x;
	int y;

};

int main(){
	Point pos={20,10};
	cout<<pos.x<<" "<<pos.y<<endl;	
	pos.x=10;
	pos.y=20;
	cout<<pos.x<<" "<<pos.y<<endl;	
return 0;
}
