#include<iostream>
using namespace std;


//  ............. (*)pattern design..//

int main(){
	int n,i,j;
	cout<<"enter n :";
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<"\n";
	}
	
	return 0;
}
