#include<iostream>
#include<string.h>
using namespace std;
class emp{
	public:
	int	emp_id;
	char emp_name[100];
	char emp_role[100];
	int emp_age;
	int	emp_salary;
	int	emp_experience;
	char emp_city[100];
	char emp_company_name[100];
};
int main(){
	emp e1,e2,e3,e4,e5;
	e1.emp_id=01;
	strcpy(e1.emp_name,"harshit");
	strcpy(e1.emp_role,"manager");
	e1.emp_age=19;
	e1.emp_salary=20000;
	e1.emp_experience=02;
	strcpy(e1.emp_city,"Surat");
	strcpy(e1.emp_company_name,"A");
	
	e2.emp_id=02;
	strcpy(e2.emp_name,"Bhavin");
	strcpy(e2.emp_role,"Manager");
	e2.emp_age=19;
	e2.emp_salary=20000;
	e2.emp_experience=02;
	strcpy(e2.emp_city,"Surat");
	strcpy(e2.emp_company_name,"B");
		
	e3.emp_id=03;
	strcpy(e3.emp_name,"Akshit");
	strcpy(e3.emp_role,"Manager");
	e3.emp_age=18;
	e3.emp_salary=22000;
	e3.emp_experience=03;
	strcpy(e3.emp_city,"Surat");
	strcpy(e3.emp_company_name,"C");
	
	e4.emp_id=04;
	strcpy(e4.emp_name,"Darshil");
	strcpy(e4.emp_role,"Manager");
	e4.emp_age=22;
	e4.emp_salary=25000;
	e4.emp_experience=03;
	strcpy(e4.emp_city,"Surat");
	strcpy(e4.emp_company_name,"D");
	
	e5.emp_id=05;
	strcpy(e5.emp_name,"Deep");
	strcpy(e5.emp_role,"Manager");
	e5.emp_age=23;
	e5.emp_salary=27000;
	e5.emp_experience=04;
	strcpy(e5.emp_city,"Surat");
	strcpy(e5.emp_company_name,"E");
	
	cout<<"Data of e1"<<endl
	    <<"emp_id : "<<e1.emp_id<<endl
	    <<"emp_name: "<<e1.emp_name<<endl
		<<"emp_role: "<<e1.emp_role<<endl
		<<"emp_age: "<<e1.emp_age<<endl
		<<"emp_salary: "<<e1.emp_salary<<endl
		<<"emp_experience: "<<e1.emp_experience<<endl
		<<"emp_city: "<<e1.emp_city<<endl
		<<"emp_company_name: "<<e1.emp_company_name<<endl<<endl;
		
	cout<<"Data of e2"<<endl
	    <<"emp_id : "<<e2.emp_id<<endl
	    <<"emp_name: "<<e2.emp_name<<endl
		<<"emp_role: "<<e2.emp_role<<endl
		<<"emp_age: "<<e2.emp_age<<endl
		<<"emp_salary: "<<e2.emp_salary<<endl
		<<"emp_experience: "<<e2.emp_experience<<endl
		<<"emp_city: "<<e2.emp_city<<endl
		<<"emp_company_name: "<<e2.emp_company_name<<endl<<endl;
		
	cout<<"Data of e3"<<endl
	    <<"emp_id : "<<e3.emp_id<<endl
	    <<"emp_name: "<<e3.emp_name<<endl
		<<"emp_role: "<<e3.emp_role<<endl
		<<"emp_age: "<<e3.emp_age<<endl
		<<"emp_salary: "<<e3.emp_salary<<endl
		<<"emp_experience: "<<e3.emp_experience<<endl
		<<"emp_city: "<<e3.emp_city<<endl
		<<"emp_company_name: "<<e3.emp_company_name<<endl<<endl;
		
	cout<<"Data of e4"<<endl
	    <<"emp_id : "<<e4.emp_id<<endl
	    <<"emp_name: "<<e4.emp_name<<endl
		<<"emp_role: "<<e4.emp_role<<endl
		<<"emp_age: "<<e4.emp_age<<endl
		<<"emp_salary: "<<e4.emp_salary<<endl
		<<"emp_experience: "<<e4.emp_experience<<endl
		<<"emp_city: "<<e4.emp_city<<endl
		<<"emp_company_name: "<<e4.emp_company_name<<endl<<endl;
		
	cout<<"Data of e5"<<endl
	    <<"emp_id : "<<e5.emp_id<<endl
	    <<"emp_name: "<<e5.emp_name<<endl
		<<"emp_role: "<<e5.emp_role<<endl
		<<"emp_age: "<<e5.emp_age<<endl
		<<"emp_salary: "<<e5.emp_salary<<endl
		<<"emp_experience: "<<e5.emp_experience<<endl
		<<"emp_city: "<<e5.emp_city<<endl
		<<"emp_company_name: "<<e5.emp_company_name<<endl<<endl;
}