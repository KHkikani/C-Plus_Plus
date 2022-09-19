#include<iostream>
using namespace std;
class customer{
	private:
		int cust_id;
		char cust_name[100];	
		int cust_age;
		char cust_telecome_brand_name[100];
		int cust_mobile_number;
		char cust_city[100];
		int cust_simcard_validity;
	public:
		void setData(){
			cout<<"Enter Customer Data"<<endl;
			cout<<"Enter Customer Id : ";    cin>>this->cust_id;
			cout<<"Enter Customer Name : ";    cin>>this->cust_name;
			cout<<"Enter Customer Age : ";    cin>>this->cust_age;
			cout<<"Enter Customer Brand Name : ";    cin>>this->cust_telecome_brand_name;
			cout<<"Enter Customer Mobile Number : ";    cin>>this->cust_mobile_number;
			cout<<"Enter Customer City : ";    cin>>this->cust_city;
			cout<<"Enter Customer SimCard Validity : ";    cin>>this->cust_simcard_validity;
		}
		
		void getData(){
			cout<<"Id : "                     <<this->cust_id
			    <<"   Name :"                 <<this->cust_name
			    <<"   Age : "                 <<this->cust_age
			    <<"   Brand Name : "          <<this->cust_telecome_brand_name        
			    <<"   Mobile Number : "       <<this->cust_mobile_number                
			    <<"   City : "                <<this->cust_city      
			    <<"   SimCard Validity : "    <<this->cust_simcard_validity  <<endl;         
		}
	};
int main(){
	customer c1,c2,c3,c4,c5;
	c1.setData();
	c2.setData();
	c3.setData();
	c4.setData();
	c5.setData();
	
	c1.getData();
	c2.getData();
	c3.getData();
	c4.getData();
	c5.getData();
	
	return 0;
}