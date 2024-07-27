#include<iostream>
#include<cmath>
using namespace std;
int square(int num){
	return pow(num,2 );
}
int cube(int num){
	return pow(num,3);
}
void sq(int n,int n1){
	if(n==1){
		cout<<"Square is "<<square(n1);
	}
	else if(n==2){
		cout<<"Cube is "<<cube(n1);
	}
	else{
		cout<<"exit";
	}
}
void press(){
	cout<<"press 1 to square\n";
	cout<<"press 2 to cube\n";
	cout<<"press any key to exit\n";
	cout<<"enter key: ";
}
int main(){
	int n,n1;
	press();
	cin>>n;
	while(n<=3&&n!=0){
		cout<<"************************************\n";
		cout<<"Enter number : ";
    	cin>>n1;
    	sq(n,n1);
    	cout<<"\n************************************\n";
    	press();
    	cin>>n;
	}	
	cout<<"exit";
	return 0;
}



