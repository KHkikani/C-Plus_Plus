#include<iostream>
#include<string.h>
using namespace std;
class Diamond{
	private:
		int comp_id;
 		char comp_name[25];
		int comp_staff_quantity;
		int comp_revenue;
		int comp_import_raw_diamonds;
		int comp_export_diamonds;
		char comp_ceo[25];
	
	public:
		Diamond(int comp_id,char comp_name[25],int comp_staff_quantity,int comp_revenue,
		int comp_import_raw_diamonds,int comp_export_diamonds,char comp_ceo[25]){
			this->comp_id=comp_id;
			strcpy(this->comp_name,comp_name);
			this->comp_staff_quantity=comp_staff_quantity;
			this->comp_revenue=comp_revenue;
			this->comp_import_raw_diamonds=comp_import_raw_diamonds;
			this->comp_export_diamonds=comp_export_diamonds;
			strcpy(this->comp_ceo,comp_ceo);
		}
		Diamond(Diamond &n){
			this->comp_id=n.comp_id;
			strcpy(this->comp_name,n.comp_name);
			this->comp_staff_quantity=n.comp_staff_quantity;
			this->comp_revenue=n.comp_revenue;
			this->comp_import_raw_diamonds=n.comp_import_raw_diamonds;
			this->comp_export_diamonds=n.comp_export_diamonds;
			strcpy(this->comp_ceo,n.comp_ceo);
		}
		void getdata(){
			cout<<"id : "<<comp_id
				<<"   name : "<<comp_name
				<<"   staff quantity : "<<comp_staff_quantity
				<<"   revenue per year : "<<comp_revenue
				<<"   raw diamonds imported per year : "<<comp_import_raw_diamonds
				<<"   export_diamonds diamonds per year : "<<comp_export_diamonds
				<<"   ceo name: "<<comp_ceo<<endl;
		}
		
};
int main(){
	Diamond d1(01,"Harshit",25,50,4000,5000,"Harshit");
	Diamond d2(02,"Darshil",50,100,8000,9000,"Darshil");
	Diamond d3=d1;
	d1.getdata();
	d2.getdata();
	d3.getdata();
	return 0;
}