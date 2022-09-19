#include<iostream>
using namespace std;
int main(){
	int a[10];
	int i;
	cout<<"Enter Array"<<endl;
	for(i=0;i<10;i++){
	    cout<<"Enter Number : ";
		cin>>a[i];
	}
	cout<<"------------"<<endl;
	cout<< "Even Number"<<endl;
	for(i=0;i<10;i++){
		if(a[i]%2==0)
		cout<< a[i] << endl;
	}
	return 0;
}
