#include<iostream>
using namespace std;
class p{
	public:
		float celsius;
	void getData(){
		cout<<"Enter celsius : ";  cin>>celsius;
	}
};
class q:public p{
	public:
		float fahrenheit;
	
	    toFehrenheit(){
	    	fahrenheit=(fahrenheit*1.8)+32;
	    	cout<<"celsius to fahrenheit : "<<fahrenheit<<endl;
     	}
};
class r:public q{
	public:
		float kelvin;
		
		toKelvin(){
	    	kelvin=celsius+273.15;
	    	cout<<"fahrenheit to kelvin : "<<kelvin<<endl;
     	}
};
int main(){
	r r1;
	r1.getData();
	r1.toFehrenheit();
	r1.toKelvin();
	return 0;
}