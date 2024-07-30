#include<iostream>
using namespace std;
int main(){
    int a[20],i,n,sum=0;
	cout<<"Enter no. of elements : ";
	cin>>n;
	cout<<"\nEnter the elements\n ";
	for(i=1;i<=n;i++){
		cin>>a[i];
        sum=sum+a[i];
	}
    cout<<"Sum of elements in above array is  "<<sum;
    

    return 0;
}