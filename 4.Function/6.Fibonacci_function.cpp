#include<iostream>
using namespace std;
int fibo(int n){
	int i,temp,t1=0,t2=1;
	for(i=0;i<n;i++){
		cout<<t1<<"\n";
		temp=t1+t2;
		t1=t2;
		t2=temp;
		
	}
	return 0;
}
int main(){
	int n;
	cout<<"enter the no. to prints fibonacci series : ";
	cin>>n;
	fibo(n);
	return 0;
}
