#include<iostream>
using namespace std;
int sum(int a,int b);

int main(){
	int a,b;
	cout<<"enter first number:";
	cin>>a;
	cout<<"enter first number:";
	cin>>b;
	cout<<"sum of 1st and 2nd is "<<sum(a,b);
	return 0;
}

int sum(int a,int b){
	return a+b;
}
