#include<iostream>
using namespace std;

//.............Greatest common division..//

int main(){
	int a,b,i,gcd,s;
	cout<<"enter a :";
	cin>>a;
	cout<<"enter b : ";
	cin>>b;
	s=(a>b)?b:a;
	for(i=1;i<=s;i++){
		if(a%i==0 && b%i==0){
			gcd=i;
		}	
	}
	cout<<"gcd of "<<a<<" and "<<b<<" is "<<gcd;
	return 0;
}

