#include<iostream>
using namespace std;
void Addition(int,int);
void Subtraction(int,int);
void Multiplication(int,int);
void Division(int,int);
void Remainder(int,int);
int main(){
	int a,b,c;
	while(1){
		cout<<"Enter First Number : ";
		cin>>a;
		cout<<"Enter Second Number : ";
		cin>>b;
		cout<<"Enter 1 For Addition"<<endl;
		cout<<"Enter 2 For Subtraction"<<endl;
		cout<<"Enter 3 For Multiplication"<<endl;
		cout<<"Enter 4 For Division"<<endl;
		cout<<"Enter 5 For Remainder"<<endl;
		cin>>c;
		switch(c){
			case 1:
				Addition(a,b);
				break;
			case 2:
				Subtraction(a,b);
				break;
			case 3:
				Multiplication(a,b);
				break;
			case 4:
				Division(a,b);
				break;
			case 5:
				Remainder(a,b);
				break;
			default:
				cout<<"Enter a Valid Choise";
		}
	}
	return 0;
}
void Addition(int x,int y){
	cout<<"Answer Of "<<x<<" + "<<y<<" Is : "<<x+y<<endl;
}
void Subtraction(int x,int y){
	cout<<"Answer Of "<<x<<" - "<<y<<" Is : "<<x-y<<endl;
}
void Multiplication(int x,int y){
	cout<<"Answer Of "<<x<<" * "<<y<<" Is : "<<x*y<<endl;
}
void Division(int x,int y){
	cout<<"Answer Of "<<x<<" / "<<y<< " Is : "<<x/y<<endl;
}
void Remainder(int x,int y){
	cout<<"Answer Of "<<x<<" % "<<y<<" Is : "<<x%y<<endl;
}