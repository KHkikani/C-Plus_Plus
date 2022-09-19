#include<iostream>
using namespace std;
class arithmetic{
	public:
		void calculate(){
			cout<<"arithmetic Operations"<<endl;
		}
};
class Operations:public arithmetic{
    public:
    	calculate(int a,int b){
    		cout<<"division Is : "<<a/b<<endl;
		}
		calculate(int a,int b,int c){
    		cout<<"subtraction Is : "<<a-b-c<<endl;
		}
		calculate(int a,int b,int c,int d){
    		cout<<"multiplication Is : "<<a*b*c*d<<endl;
		}
		calculate(int a,int b,int c,int d,int e){
    		cout<<"addition Is : "<<a+b+c+d+e<<endl;
		}
};
int main(){
	Operations o;
//	o.calculate();
	o.calculate(10,9);
	o.calculate(10,9,8);
	o.calculate(10,9,8,7);
	o.calculate(10,9,8,7,6);
	return 0;
}