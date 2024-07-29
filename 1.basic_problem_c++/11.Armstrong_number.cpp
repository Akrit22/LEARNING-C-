#include<iostream>
#include<math.h>
using namespace std;
///.....................Armstrong number.....//

int main(){
	int n,o_n,r,d=0,s=0;
	cout<<"enter number :";
	cin>>n;
	o_n=n;          
	while(n!=0){  //// for counting the number of digits
		n=n/10;
		d++;
	}
	n=o_n;
	while(n!=0){   
		r=n%10;
		s=s+pow(r,d);
		n=n/10;
		
	}
	if(s==o_n){
		cout<<"An Armstrong Number ";
	}
	else{
		cout<<"Not An Armstrong Number";
	}
	
	return 0;
}

