#include<iostream>
using namespace std;
class vote{
	private:
		int a;
		
	public:
		vote(){
			cout<<"ENTER Age : ";  cin>>a;
			try{
				if(a<18){
					throw a;
				}
				else{
					cout<<"A Person Age is "<<a<<". Person Can Be Able For Vote."<<endl;
				}
			}
			catch(int n){
				cout<<"A Person Age is "<<n<<". Person CanNot Be Able For Vote."<<endl;
			}
		}
};
int main(){
	vote v;
	return 0;
}