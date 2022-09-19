#include<iostream>
using namespace std;
class RBI{
	public :
		float rate;
		
		void getROI(){
			this->rate=3.5;
			cout<<"RBI ROT RATE is : "<<this->rate<<endl;
		}
};

class SBI:public RBI{
	public :		
		void getROI(){
			this->rate=4.5;
			cout<<"SBI ROT RATE is : "<<this->rate<<endl;
		}
};

class BOB:public RBI{
	public :
	
		void getROI(){
			this->rate=4;
			cout<<"BOB ROT RATE is : "<<this->rate<<endl;
		}
};

class ICICI:public RBI{
	public :
	
		void getROI(){
			this->rate=3.75;
			cout<<"ICICI ROT RATE is : "<<this->rate<<endl;
		}
};
int main(){
	RBI r1;
	SBI s1;
	BOB b1;
	ICICI i1;
	
	r1.getROI();
	s1.getROI();
	b1.getROI();
	i1.getROI();
	
	
	return 0;
}