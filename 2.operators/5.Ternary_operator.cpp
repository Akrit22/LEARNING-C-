#include<iostream>
using namespace std;
int main(){
	int a,b,s;
	cout<<"enter a and b ";
	cin>>a>>b;
	s=(a>b)?a:b; // ternary operator // Assigning 's' true value
	cout<<s<<" is greater";
	return 0;
}
