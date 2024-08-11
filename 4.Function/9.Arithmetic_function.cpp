#include<iostream>
using namespace std;
void add(int a,int b);
void subtract(int a,int b);
void multiply(int a,int b);
void division(int a,int b);
int main(){
	int a,b;
	cout<<"Enter two numbers : ";
	cin>>a>>b;
	if(a>b){
		add(a,b); 
	    subtract(a,b);
		multiply(a,b);
		division(a,b);
		}
	else{
	    cout<<" Entered 'a' less then 'b' (a<b)\nEntered 'a' should be greater then 'b' (a>b)";
		}
	return 0;
}
void add(int a,int b){
	cout<<" Addition is : "<<a+b<<endl;
}
void subtract(int a,int b){
	cout<<" Subtract is : "<<a-b<<endl;
}
void multiply(int a,int b){
	cout<<" Multiply is : "<<a*b<<endl;
}
void division(int a,int b){
	cout<<" Division is : "<<a/b<<endl;
}
