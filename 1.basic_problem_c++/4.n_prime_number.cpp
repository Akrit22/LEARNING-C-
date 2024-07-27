#include<iostream>
using namespace std;

/// ////..........................n prime number///
int main(){
	int n;
	cout<<"enter n  ";
	cin>>n;
	int num=2;
	while (num<=n){
		int div=2;
		while(div<num){
			if (num%div==0){
				num=num+1;
			}
			else{
				div=div+1;
			}
		}
		cout<<num<<endl;
		num++;
	}
	
	return 0;
}

