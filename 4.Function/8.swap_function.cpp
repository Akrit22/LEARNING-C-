#include<iostream>
using namespace std;
int swap(int a,int b){
    int	temp=a;
	a=b;
	b=temp;
	cout<<"a="<<a<<" ,b="<<b;
	return 1;
}
int main(){
	int a,b;
	cout<<"enter a and b : ";
	cin>>a>>b;
	swap(a,b);
	return 0;
}
