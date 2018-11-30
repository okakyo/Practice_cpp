#include<iostream>
#include<string>

//\‘¢‘Ì‚Ì—ûK

using namespace std;

struct Point{
	int x;
	int y;

} ;

int main(){

	Point pos={10,20};
	cout<<pos.x<<" "<<pos.y<<endl;
	pos.x=20;
	pos.y=50;
	cout<<pos.x<<" "<<pos.y<<endl;
return 0;

}
