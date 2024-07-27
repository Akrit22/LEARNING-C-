#include<iostream>
using namespace std;

//............sum of n numbers

int main(){
	int n ,i;
	cout<<"enter n  ";
	cin>>n;
	int sum=0;
	for(i=1;i<=n;i++){
		sum=sum+i;
	}
	cout<<sum;
	return 0;
}
