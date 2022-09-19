#include<iostream>
using namespace std;

class higher
{
	public:
		int x;
		
		void setData(int x)
		{
			this->x=x;
		}
		void getData(){
			cout<<"x Is : "<<this->x;
		}
		
		higher operator<(higher n)
		{
			higher temp;
			if(this->x > n.x)
			{
				temp.x=this->x;
			}
			else
			{
				temp.x=n.x;
			}
			return temp;
		}
};
int main()
{
	higher h1,h2,h3;
	h1.setData(7);
	h2.setData(5);
	h3=h2 < h1;		      //h3 = h2.operator<(h1)
	h3.getData();
	return 0;
} 