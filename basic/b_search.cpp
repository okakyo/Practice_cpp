#include<cstdio>

using namespace std;

int b_search(int n,auto num,auto X[]){
	int high=n-1,low=0,med,ans=-1;
	while (low<=high){
		med=(high+low)/2;
		if (num==X[med]){ans=med;break;}
		else if(num<X[med])high=med-1;
		else low=med+1;
	}	
	return ans;
}

int main(){
	int ans,N,X[]={2,5,6,8,10,16,32},n=7;
	printf("������������������͂��Ă��������F");
	scanf("%d",&N);
	ans=b_search(n,N,X);
	if (ans==-1) printf("%d�͑��݂��܂���B",N);
	else  printf("%d�́A%d�Ԗڂɑ��݂��܂��B",N,ans+1);
return 0;
}
