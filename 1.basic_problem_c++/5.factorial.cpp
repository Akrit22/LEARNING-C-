#include <iostream>
using namespace std;

//.........factorial of a number/////

int main(){
	int n,i,fact;
	cout<<"enter 0 to exit from loop \n ";
	cout<<"enter n(for its factorial) :";
	cin>>n;
	while(n!=0){
		fact=1;
	
	for(i=1;i<n+1;i++){
		fact=fact*i;
	}
	cout<<"factorial "<<fact<<endl;
	cout<<"**************************  ";
	cout<<"************************** ";
	cout<<"\nenter 0 to exit from loop \n ";
	cout<<"enter n(for its factorial) :";
	cin>>n;
}
cout<<"exit";
	return 0;
}
