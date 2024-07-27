#include<iostream>
using namespace std;

//....................fibonacci series.///

int main(){
	int temp,i,t1=0,t2=1,n;
	cout<<"enter number of element :";
	cin>>n;
	cout<<"\n fibonacci series\n";
	for(i=0;i<n;i++){
		cout<<t1<<"  ";
		temp=t1+t2;
		t1=t2;
		t2=temp;
	}
	return 0;
}

