#include<iostream>
using namespace std;
class passwordcheck{
	private:
		char p[100];
		int i=0;
		
	public:
		passwordcheck(){
			cout<<"\n\nENTER PASSWORD : ";  cin.getline(p,100);
			try{
				for(int j=0; p[j]!='\0'; j++){
					if(p[j]>='A' && p[j]<='Z'){
						throw 0;
						break;
					}
				}
					passwordcheck();
			}
			catch(...){
				cout<<"PASSWORD IS VALIDATE."<<endl;
			}
		}
};
int main(){
	passwordcheck p;
	return 0;
}