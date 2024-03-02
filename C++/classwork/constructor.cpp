// constructor

#include<iostream>
using namespace std;
class A{
	public:
		A(){
			cout<<"\n constructor";
		}
		void print_msg(){
			cout<<"\n class A print msg";
		}
};
int main(){
	A obj,obj2,obj3;
	obj.print_msg();
	obj.print_msg();
	A obj4,obj5;
}
