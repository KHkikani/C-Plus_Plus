#include<iostream>
using namespace std;
class cricket{
	public:
		void getTotalOvers(){
			cout<<"Details Of Over : "<<endl;
		}
};
class T20Match:public cricket{
	public:
		void getTotalOvers(){
			cricket::getTotalOvers();
			cout<<"Total 20 Over Of T20 Match"<<endl;
		}
};
class TestMatch:public cricket{
	public:
		void getTotalOvers(){
			cricket::getTotalOvers();
			cout<<"Total 50 Over Of Test-Match Day-1"<<endl;
		}
};
int main(){
	T20Match a;
	TestMatch b;
	a.getTotalOvers();
	b.getTotalOvers();
}