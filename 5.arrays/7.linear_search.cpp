//........linear search using array.....//
#include<iostream>
using namespace std;
int main(){
	int i,a[30] ,n,item,pos=-1;
	cout<<"enter the no. of elements :";
	cin>>n;
	cout<<"enter the element :";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"\nenter item to be searched :";
	cin>>item;
	for(i=0;i<n;i++){
		if(a[i]==item){
			pos=i;
			break;
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
