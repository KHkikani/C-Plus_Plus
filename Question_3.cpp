#include<iostream>
#include<string.h>
using namespace std;
class hotel{
	public:
		static char htype[100];
	private:
		int hotel_id;
		char hotel_name[50];
		int hotel_rating;
		char hotel_location[100];
		int hotel_establish_year;
		int hotel_staff_quantity;
		int hotel_room_quantity;
	public:
//		static void hoteltype(){
//			strcpy(htype,"Hotel");
//		}
		void setData(int x){
			cout<<"Enter "<<x+1<<" Hotel Details"<<endl;
			cout<<"Enter Hotel Id : ";          	cin>>this->hotel_id;
			cout<<"Enter Hotel Name : ";   		    cin>>this->hotel_name;
			cout<<"Enter Hotel Rating : ";   	    cin>>this->hotel_rating;
			cout<<"Enter Hotel Location : ";        cin>>this->hotel_location;
			cout<<"Enter Hotel Establish Year : ";  cin>>this->hotel_establish_year;
			cout<<"Enter Hotel Staff Quantity : ";  cin>>this->hotel_staff_quantity;
			cout<<"Enter Hotel Room Quantity : ";   cin>>this->hotel_room_quantity;
			cout<<endl;
		}
		void getData(){
			cout<<"Hotel Id : "					<<this->hotel_id
			    <<"   Hotel Name : "				<<this->hotel_name
				<<"   Hotel Rating : "				<<this->hotel_rating
				<<"   Hotel Location : "			<<this->hotel_location
				<<"   Hotel Establish Year : "		<<this->hotel_establish_year
				<<"   Hotel Type : "				<<hotel::htype
				<<"   Hotel Staff Quantity : "		<<this->hotel_staff_quantity
				<<"   Hotel Room Quantity : "		<<this->hotel_room_quantity
		    	<<endl;
	 	}
};
char hotel::htype[]="hotel";
int main(){
	int i;
	hotel h[100];
	cout<<"How Many Hotel Data You Need : ";
	cin>>i;
	for(int j=0;j<i;j++){
		h[i].setData(j);
	}
//	hotel::hoteltype();
	for(int j=0;j<i;j++){
		h[i].getData();
	}
	return 0;
}