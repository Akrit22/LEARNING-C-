//........binary search using array....//
#include<iostream>
using namespace std;
int main(){
	int i,a[30] ,n,item,pos=-1;
	int low ,high,mid;
	cout<<"enter the no. of elements :";
	cin>>n;
	cout<<"enter the element :";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"\nenter item to be searched :";
	cin>>item;
	low=0 ;
	high=n-1;
	while(low<=high){
		mid=(high+low)/2;
		if(a[mid]==item){
			pos=mid;
			break;
		}
		else if(a[mid]>item){
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
		if(pos!=-1){
		cout<<" item found :"<<pos+1;
	}
	else
	{
		cout<<" item not found ";
	}
	return 0;
} 
