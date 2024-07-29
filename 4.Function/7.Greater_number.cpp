#include<iostream>
using namespace std;
int great(int a,int b,int c){
	return (a>b&&a>c)?a:((b>c&&b>a)?b:c);  //ternary operator
}
int main(){
	int x,y,z;
	cout<<"enter 3 numbers \n";
	cin>>x>>y>>z;
	cout<<"greatest number is "<<great(x,y,z);
	return 0;
}
