#include<iostream>
using namespace std;
class sTime;
class fTime	{
	private:
		int hh;
		int mm;
		int ss;
	public:
		setData(){
			cout<<"Enter Time"<<endl;
			cout<<"HH :";   cin>>hh;
			cout<<"MM :";   cin>>mm;
			cout<<"SS :";   cin>>ss;
		}
	friend void add(fTime,sTime);
};
class sTime	{
	private:
		int hh;
		int mm;
		int ss;
	public:
		setData(){
			cout<<"Enter Time"<<endl;
			cout<<"HH :";   cin>>hh;
			cout<<"MM :";   cin>>mm;
			cout<<"SS :";   cin>>ss;
		}
	friend void add(fTime,sTime);
};
void add(fTime n,sTime n1){
	int h,m,s;
	cout<<"Addition of time is : "<<endl;
	s=(n.ss+n1.ss)/60;
	m=(n.mm+n1.mm)+s;
	h=(n.hh+n1.hh)+(m/60);
	s=(n.ss+n1.ss)%60;
	m=(n.mm+n1.mm)%60;
	cout<<h<<" : "<<m<<" : "<<s;
}
int main(){
	fTime f;
	sTime s;
	f.setData();
	s.setData();
	add(f,s);
	return 0;
}