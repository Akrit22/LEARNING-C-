#include<iostream>
using namespace std;

int main(){
	int a[20],i,n,temp;
	cout<<"Enter no. of elements : ";
	cin>>n;
	cout<<"\nEnter the elements \n ";
	for(i=1;i<=n;i++){
		cin>>a[i];
	}
	for(i=1;i<=n/2;i++){
		temp=a[i];
		a[i]=a[n-i+1];
		a[n-i+1]=temp;
	}
	cout<<"\nReverse array\n";
	for(i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	
	return 0;
}
