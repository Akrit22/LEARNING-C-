#include<iostream>
using namespace std;
int main(){
	int a[30],i,count=0,n,x;
	cout<<"enter no. of elements : ";
	cin>>n;
	cout<<"enter elements \n";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<" enter element to check its occurrence :";
	cin>>x;
	for(i=0;i<n;i++){
		if(a[i]==x){
			count++;     // count++ :- counts the the no. of occurrence of given element i.e x
		}
	}
	cout<<" number of occurrence is : "<<count;
	
	return 0;
}
