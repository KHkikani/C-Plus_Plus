#include<iostream>
using namespace std;
int fact(int);
int main(){
	int i;
	int a[5],b[5];
	cout<<"Enter Array"<<endl;
	for(i=0;i<5;i++){
		cout<<i+1<<" Element : ";
		cin>>a[i];	
	}
	for(i=0;i<5;i++){
		b[i]=fact(a[i]);
	}
	cout<<"Factorial Array Element"<<endl;
	for(i=0;i<5;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}
inline int fact(int x){
	int f;
		if(x==0 || x==1){
			return 1;
		}
		if(x>1){
			f=x*fact(x-1);
		}
		return f;
}