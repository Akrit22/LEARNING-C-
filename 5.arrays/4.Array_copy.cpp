#include<iostream>
using namespace std;
int main(){
	int a[10],b[10],i,n;
	cout<<"enter no. of elements : ";
	cin>>n;
	cout<<"enter element of a:\n"; 
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		b[i]=a[i];
	}
	cout<<"element of copied array\n";
	for(i=0;i<n;i++){
		cout<<b[i]<<"  "; // copied array a[10] to b[10]
	}
	
	return 0;
}
