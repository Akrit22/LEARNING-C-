#include<iostream>
using namespace std;

int main(){
	int a[20],i,n,temp;
	cout<<"Enter no. of elements : ";
	cin>>n;
	cout<<"\nEnter the elments ";
	for(i=1;i<=n;i++){
		cout<<"\nEnter element a["<<i<<"]:";
		cin>>a[i];
	}
	cout<<"\nElements of array\n";
	for(i=1;i<=n;i++){
		cout<<a[i] <<"  ";
	}
	
	return 0;
}
