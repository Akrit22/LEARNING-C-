#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"enter a and b ";
	cin>>a>>b;
	a+=b;
	cout<<"a+=b(a=a+b):"<<a<<endl; 
	cout<<"enter a and b ";
	cin>>a>>b;   
	a-=b;
	cout<<"a-=b(a=a-b):"<<a<<endl;
    cout<<"enter a and b ";
	cin>>a>>b;
	a*=b;
	cout<<"a*=b(a=a*b):"<<a<<endl;
	cout<<"enter a and b ";
	cin>>a>>b;
	a/=b;
	cout<<"a/=b(a=a/b):"<<a<<endl;
	cout<<"enter a and b ";
	cin>>a>>b;
	a%=b;
	cout<<"a%=b(a=a%b):"<<a<<endl;
	cout<<"enter a and b ";
	cin>>a>>b;
	a=b;
	cout<<"a=b ="<<a<<endl;	
	
	return 0;
}
