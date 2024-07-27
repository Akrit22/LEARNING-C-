#include<iostream>
using namespace std;

//.............to find whether a number palindrome or not...//

int main(){
	int n,r;
	cout<<"enter n  ";
	cin>>n;
	r=0;
	int p=n;
	while(n!=0){
		r=r*10+n%10;
		n=n/10;
	}
	if(p==r){
	   cout<<" palindrome number";
    }
    else{
	   cout<<" not a palindrome number";
    }
	return 0;
}
