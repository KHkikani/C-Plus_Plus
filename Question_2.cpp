#include<iostream>
#include<string.h>
using namespace std;
class car{
	public:
	int	car_id;
	char car_company_name[100];
	char car_color[100];
	int car_model;
	int car_release_year;
	
};
int main(){
	car c1,c2,c3,c4;
	c1.car_id=01;
	strcpy(c1.car_company_name,"Tata");
	strcpy(c1.car_color,"Red");
	c1.car_model=1901;
	c1.car_release_year=2000;
	
	c2.car_id=02;
	strcpy(c2.car_company_name,"Tata");
	strcpy(c2.car_color,"Blue");
	c2.car_model=1902;
	c2.car_release_year=2005;
	
	c3.car_id=03;
	strcpy(c3.car_company_name,"Tata");
	strcpy(c3.car_color,"Black");
	c3.car_model=1903;
	c3.car_release_year=2010;
	
	c4.car_id=04;
	strcpy(c4.car_company_name,"Tata");
	strcpy(c4.car_color,"White");
	c4.car_model=1904;
	c4.car_release_year=2015;
	
			
	cout<<"Data of c1"<<endl
	    <<"car_id : "<<c1.car_id<<endl
	    <<"car_company_name: "<<c1.car_company_name<<endl
		<<"car_color: "<<c1.car_color<<endl
		<<"car_model: "<<c1.car_model<<endl
		<<"car_release_year: "<<c1.car_release_year<<endl<<endl;
		
	cout<<"Data of c2"<<endl
	    <<"car_id : "<<c2.car_id<<endl
	    <<"car_company_name: "<<c2.car_company_name<<endl
		<<"car_color: "<<c2.car_color<<endl
		<<"car_model: "<<c2.car_model<<endl
		<<"car_release_year: "<<c2.car_release_year<<endl<<endl;
		
	cout<<"Data of c3"<<endl
	    <<"car_id : "<<c3.car_id<<endl
	    <<"car_company_name: "<<c3.car_company_name<<endl
		<<"car_color: "<<c3.car_color<<endl
		<<"car_model: "<<c3.car_model<<endl
		<<"car_release_year: "<<c3.car_release_year<<endl<<endl;
		
	cout<<"Data of c4"<<endl
	    <<"car_id : "<<c4.car_id<<endl
	    <<"car_company_name: "<<c4.car_company_name<<endl
		<<"car_color: "<<c4.car_color<<endl
		<<"car_model: "<<c4.car_model<<endl
		<<"car_release_year: "<<c4.car_release_year<<endl<<endl;
}