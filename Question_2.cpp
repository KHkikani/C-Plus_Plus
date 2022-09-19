#include<iostream>
using namespace std;
class area{
	public:
		int r,b,h,w,height;
		virtual void calculate()=0;
};
class areaOfCircle:public area{
	public:
		void calculate(){
			cout<<"\narea Of Circle is : "<<endl;
			cout<<"Enter redius : ";  cin>>r;
			cout<<"Area : "<<3.14*r*r<<endl;
		}
};
class areaOfTriangle:public area{
	public:
		void calculate(){
			cout<<"\narea Of Triangle is : "<<endl;
			cout<<"Enter base : ";  cin>>b;
			cout<<"Enter Hight : ";  cin>>h;
			cout<<"Area : "<<0.5*b*h<<endl;
		}
};
class areaOfRectangle:public area{
	public:
		void calculate(){
			cout<<"\narea Of Rectangle is : "<<endl;
			cout<<"Enter Width : ";  cin>>w;
			cout<<"Enter Hight : ";  cin>>height;
			cout<<"Area : "<<w*height<<endl;
		}
};
int main(){
	areaOfCircle c;
	areaOfTriangle t;
	areaOfRectangle r;
	c.calculate();
	t.calculate();
	r.calculate();
	return 0;
}