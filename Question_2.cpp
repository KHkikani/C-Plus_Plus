#include<iostream>
using namespace std;
int main(){
	char c[100];
	int i;
	cout<<"Enter : ";
	cin>>c;
	for(i=0;i<sizeof(c);i++){
		if(c[i]>=65&&c[i]<=90){
		c[i]+=32;
		}
		else if(c[i]>=97&&c[i]<=122){
		c[i]-=32;
		}
	}
	cout<<"toggle :-"<<endl;
	cout<<"----------"<<endl;
	cout<<c<<endl;
	cout<<"----------"<<endl;
	return 0;
}