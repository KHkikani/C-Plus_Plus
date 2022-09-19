#include<iostream>
using namespace std;
int main(){
	int i,j,p=0;
	int a[253];
	for(i=2020;i<=3030;i++){
		if(i%4==0){
			a[p]=i;
			p++;
		}
	}
    cout<<"All Leap Years From 2020 to 3030 :-"<<endl;
	for(j=0;j<253 ;j++){
		cout<<"\t"<<a[j];
	}
	return 0;
}