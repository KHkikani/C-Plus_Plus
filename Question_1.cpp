#include<iostream>
using namespace std;
class student{
	private:
		int stu_id;
		char stu_name[100];	
		int stu_age;
		char stu_course[100];
		char stu_email[100];
		char stu_city[100];
		char stu_college[100];
	public:
		void setData(){
			cout<<"Enter Student Data"<<endl;
			cout<<"Enter Student Id : ";    cin>>this->stu_id;
			cout<<"Enter Student Name : ";    cin>>this->stu_name;
			cout<<"Enter Student Age : ";    cin>>this->stu_age;
			cout<<"Enter Student Course : ";    cin>>this->stu_course;
			cout<<"Enter Student Email : ";    cin>>this->stu_email;
			cout<<"Enter Student City : ";    cin>>this->stu_city;
			cout<<"Enter Student College : ";    cin>>this->stu_college;
		}
		
		void getData(){
			cout<<"Id : "              <<this->stu_id
			    <<"   Name :"             <<this->stu_name
			    <<"   Age : "             <<this->stu_age
			    <<"   Course : "          <<this->stu_course          
			    <<"   Email : "           <<this->stu_email                   
			    <<"   City : "            <<this->stu_city       
			    <<"   College : "         <<this->stu_college   <<endl;         
		}
	};
int main(){
	student s1,s2,s3,s4,s5;
	s1.setData();
	s2.setData();
	s3.setData();
	s4.setData();
	s5.setData();
	
	s1.getData();
	s2.getData();
	s3.getData();
	s4.getData();
	s5.getData();
	
	return 0;
}