#include<iostream>
using namespace std;
class x{
	public:
		int a;
		int b;
		int c;
};
class y:public x{
	public:
		setData(){
			cout<<"Enter a : ";  cin>>a;
			cout<<"Enter b : ";  cin>>b;
			cout<<"Enter c : ";  cin>>c;
		}
		getData(){
			cout<<"Cube Of a : "<<a*a*a<<endl;
			cout<<"Cube Of b : "<<b*b*b<<endl;
			cout<<"Cube Of c : "<<c*c*c<<endl;
		}
};
int main(){
	y y1;
	y1.setData();
	y1.getData();
	return 0;
}