#include<iostream>

using namespace std;

int fib(int n){
	int ans=1,a=0,b;
	for (int i=0;i<n;i++){
		b=a;
		a=ans;
		ans=a+b;
	}
return ans;
}

int main(){
	int x;
	cout<<"��������͂��Ă��������B";
	cin>>x;
	cout<<fib(x)<<endl;
return 0;
}
