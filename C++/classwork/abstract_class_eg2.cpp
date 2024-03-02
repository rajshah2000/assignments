// abstract class eg

#include<iostream>
using namespace std;
class shape{
	public:
		virtual void area()=0;
};
class circle:public shape{
	float r;
	public:
		void area(){
			cout<<"\nEnter radius:";
			cin>>r;
			cout<<"\nArea of circle:"<<(3.14*r*r);
			
		}
};
class rectangle:public shape{
	int l,w;
	public:
		void area(){
			cout<<"\nEnter length:";
			cin>>l;
			cout<<"\nEnter width:";
			cin>>w;
			cout<<"\nArea of rectangle:"<<(l*w);
		}
};
class sqaure:public shape{
	int s;
	public:
		void area(){
			cout<<"\nEnter side:";
			cin>>s;
			cout<<"\nArea of sqaure:"<<s*s;
		}
};
int main(){
	circle c;
	c.area();
	rectangle r;
	r.area();
	sqaure s1;
	s1.area();
}


