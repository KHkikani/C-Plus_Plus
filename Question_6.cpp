#include<iostream>
#include<string.h>
using namespace std;
class cafe{
	private:
		int cafe_id;
 		char cafe_name[25];
		int cafe_rating;
		char cafe_location[25];
		int cafe_establish_year;
		int cafe_staff_quantity;
	public:
		static char cafe_type[25];
	public:
		cafe(){
			cout<<endl<<"Enter cafe id : ";     			cin>>this->cafe_id;
			cout<<"Enter cafe name : ";   				  cin>>this->cafe_name;
			cout<<"Enter cafe rating : ";     				cin>>this->cafe_rating;
			cout<<"Enter cafe location : ";     		 	cin>>this->cafe_location;
			cout<<"Enter cafe establish year : ";    		 cin>>this->cafe_establish_year;
			cout<<"Enter cafe staff quantity : ";    		 cin>>this->cafe_staff_quantity;	
		}
		
		void getdata(){
		    cout<<endl<<"cafe id : ";     					cout<<this->cafe_id;
			cout<<"   cafe name : ";   				    cout<<this->cafe_name;
			cout<<"   cafe type : ";     				cout<<cafe::cafe_type;
			cout<<"   cafe rating : ";     				cout<<this->cafe_rating;
			cout<<"   cafe location : ";     		 	cout<<this->cafe_location;
			cout<<"   cafe establish year : ";    		cout<<this->cafe_establish_year;
			cout<<"   cafe staff quantity : ";    		cout<<this->cafe_staff_quantity;	
		}
		
};
char cafe::cafe_type[25]="Normal";
int main(){
	int p;
	cout<<"Enter Total Number of Fast Food cafe :";
	cin>>p;
	cafe c[p];
	for(int i=0;i<p;i++){
		c[i].getdata();
	}
	return 0;
}