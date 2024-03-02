// inheritance single student example

#include<iostream>
using namespace std;
class student{
	protected:
		int rollno;
		char name[50];
		
		void get_detail(){
			cout<<"\n enter roll no:";
			cin>>rollno;
			cout<<"\n enter name:";
			cin>>name;
		}
};
class result:public student{     //inheritanc
private:
	double per;
	public:
		void get_percentage(){
			get_detail();    //call
			cout<<"\n enter per:";
			cin>>per;	
		}
		void display_result(){
			cout<<"\n rollno:"<<rollno<<"\nname:"<<name<<"\nper:"<<per;
		}
};
int main(){
	result r1;
	r1.get_percentage();
	r1.display_result();
}
