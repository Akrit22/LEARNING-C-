#include<iostream>
using namespace std;

//....using arithmetic operators(+,-,*,/,%) 
int main(){
	int a,b;
	cout<<"enter a : ";
	cin>>a;
	cout<<"\n enter b : ";
	cin>>b;
	cout<<" 1.ADDITION\n";
	cout<<" 2.SUBTRACTION\n";
	cout<<" 3.MULTIPLICATION\n ";
	cout<<" 4.DIVISION\n";
	cout<<" 5.MODULUS\n";
	cout<<" Enter operator(1-5): ";
	int n;
	cin>>n;
	switch(n){
		case 1:
			cout<<a+b;
			break;
			
		case 2:
		cout<<a-b;
		break;
		
		case 3:
		cout<<a*b;
		break;
		
		case 4: 
		cout<<a/b;
		break;
		
		case 5:
		cout<<a%b;
		break;
		
		default:
		cout<<"wrong input!! enter b/w 1-5";
		break;	
	}
	return 0;
}
