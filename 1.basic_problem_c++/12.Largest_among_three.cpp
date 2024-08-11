#include<iostream>
using namespace std;
int great(int a,int b,int c){
    return (a>b&&a>c)? a:((b>a && b>c)?b: c);
}
int main(){
	int num1,num2,num3,sum1,sum2,sum3;
	cout<<"enter 3 numbers \n";
	cin>>num1>>num2>>num3;
	cout<<"Greater of 3 numbers is :"<<great(num1,num2,num3)<<endl;
	sum1=num1+num2;         
	sum2=num1+num3;
	sum3=num2+num3;
	cout<<"sum1="<<sum1<<"  sum2="<<sum2<<"  sum3="<<sum3<<endl;
	cout<<"Greater of 3 sum is :"<<great(sum1,sum2,sum3);
	return 0;
}
