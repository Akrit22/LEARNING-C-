#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"enter a and b ";
	cin>>a>>b;
	while(a>10&&b>10){            //  "&&" and operator
		cout<<"a AND b are greater than 10";
		break;
	}
	while(a>10||b>10){            //  "||" or operator
		cout<<"\na OR b are greater than 10";
		break;
	}
	while(!(a>10&&b>10)){            //  "!" not operator
		cout<<"\na AND b are NOT greater than 10";
		break;
	}
	return 0;
}
