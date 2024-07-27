#include<iostream>
using namespace std;

//.......REVERSE A NUMBER//

int main(){
	int n,r=0;
	cout<<"enter n  ";
	cin>>n;
	while(n!=0){
		r=r*10+n%10;
		n=n/10;
		
	}
	cout<<"reverse "<<r;
	return 0;
}
