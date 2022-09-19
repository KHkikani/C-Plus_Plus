#include<iostream>
using namespace std;
class admin{
	public:
		char company_name[50]="ABCD";
		int manager_salary;
		int employee_salary;
		int total_staff;
		int total_annual_revenue;
		char can_terminate[50];
		
		void setData(){
			cout<<"ENTER COMPANT NAME : ";   cin>>company_name;
			cout<<"ENTER Total Staff  : ";   cin>>total_staff;
			cout<<"ENTER Total Annual Revenue : ";   cin>>total_annual_revenue;
			cout<<"ENTER Can Terminate: ";   cin>>can_terminate;	
		}
		void myAccess(){
			cout<<" COMPANT NAME : "<<company_name<<endl;
			cout<<" Total Staff  : "<<total_staff<<endl;
			cout<<" Total Annual Revenue : "<<total_annual_revenue<<endl;
			cout<<" ENTER Can Terminate: "<<can_terminate<<endl;
		}
};
class manager:public admin{
	public:
		void setData(){
				cout<<"ENTER Manager Salary : ";   cin>>manager_salary;
				cout<<"ENTER Total Staff  : ";   cin>>total_staff;
				cout<<"ENTER Can Terminate: ";   cin>>can_terminate;
			}
		void myAccess(){
			cout<<" Manager Salary : "<<manager_salary<<endl;
			cout<<" Total Staff  : "<<total_staff<<endl;
			cout<<" ENTER Can Terminate : "<<can_terminate<<endl;
		}
};
class employee:public manager{
	public:
		void setData(){
				cout<<"ENTER Employee Salary : ";   cin>>employee_salary;
				cout<<"ENTER Can Terminate: ";   cin>>can_terminate;
			}
		void myAccess(){
			cout<<" Employee Salary : "<<employee_salary<<endl;
			cout<<" ENTER Can Terminate : "<<can_terminate<<endl;
		}
};
int main(){
	admin a;
	manager m;
	employee e;
	cout<<endl<<"Admin Details : "<<endl;
	a.setData();
	a.myAccess();
	cout<<endl<<"Manager Details : "<<endl;
	m.setData();
	m.myAccess();
	cout<<endl<<"employee Details : "<<endl;
	e.setData();
	e.myAccess();
	return 0;
}