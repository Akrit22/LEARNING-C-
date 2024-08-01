#include<iostream>
using namespace std;
void hi(){
	cout<<"\n********************************";
	cout<<"\n Press 1 if you want to element at last.";
	cout<<"\n Press 2 if you want to element at First.";
	cout<<"\n Press 3 if you want to element at some position.";
	cout<<"\n Press 9 to exit.";
	cout<<"\n********************************";
	cout<<"\n Press key: ";
}
int main(){
	int n,i,a[30],n1,el,pos,num,ele;
	cout<<"enter the no. of elements :";
	cin>>n;
	for(i=1;i<=n;i++){
		cout<<"enter the element"<<i<<" :";
		cin>>a[i];
	}
	cout<<"element of a"<<endl;
	for(i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	hi();
	cin>>n1;
	cout<<"\n********************************\n";
	while(n!=0){
		switch(n1){
			case 1: cout<<"enter the element to be added :";
			cin>>el;
			a[n+1]=el;
			n=n+1;
			cout<<"********************************\n";
			cout<<"element of a"<<endl;
            for(i=1;i<=n;i++){
		        cout<<a[i]<<" ";
			}
			cout<<"\n********************************";
			break;
			
			case 2: cout<<"enter the element to be added :";
			cin>>el;
			for(i=n;i>=1;i--){
		        a[i+1]=a[i];
			}
			a[1]=el;
			n=n+1;
			cout<<"********************************\n";
			cout<<"element of a"<<endl;
            for(i=1;i<=n;i++){
		        cout<<a[i]<<" ";
			}
			cout<<"\n********************************";
			break;
			
			case 3: cout<<"enter the element to be added :";
			cin>>el;
			cout<<"\nenter the position ( 1 to "<<n<<") :";
			cin>>pos;
			if(pos<1 ||pos>n){
				cout<<"invalid position";
			}
			for(i=n;i>=pos;i--){
		        a[i+1]=a[i];
			}
			a[pos]=el;
			n=n+1;
			cout<<"********************************\n";
			cout<<"element of a"<<endl;
            for(i=1;i<=n;i++){
		        cout<<a[i]<<" ";
			}
			cout<<"\n********************************";
			break;
				
				
			
			case 9: cout<<"showing your element before exiting \n";
                    cout<<"********************************\n";
                 	cout<<"element of a"<<endl;
                    for(i=1;i<=n;i++){
	                   	cout<<a[i]<<" ";
	                  		}
                   	cout<<"\n********************************\n";
                	cout<<"exit";
                	return 1;
                	break;
			
			default: cout<<"wrong input";
			break;
	}
	hi();
	cin>>n1;
	cout<<"\n********************************\n";
}
	
	return 0;
}
