#include<iostream>
using namespace std;
class division{
	private:
		int a,b,c;
		
	public:
		division(){
			cout<<"ENTER NUMBER : ";  cin>>a;
			cout<<"ENTER NUMBER : ";  cin>>b;
			try{
				if(b==0){
					throw a;
				}
				else{
					c=a/b;
					cout<<"ANSWER IS : "<<c<<endl;
				}
			}
			catch(...){
				cout<<a<<" Can Not Divide By Zero."<<endl;
			}
		}
};
int main(){
	division d;
	return 0;
}