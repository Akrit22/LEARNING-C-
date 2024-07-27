#include<iostream>
using namespace std;
void table(int n){
	for(int i=1;i<=10;i++){
		cout<<"\t\t\t\t\t"<<n<<" * "<<i<<" = "<<n*i<<endl;
	}
}
int main(){
	int n;
	cout<<"enter the number to prints its table: ";
	cin>>n;
	while(n!=0){
	table(n);
	cout<<"enter the number to prints its table: ";
	cin>>n;
}
	return 0;
}

