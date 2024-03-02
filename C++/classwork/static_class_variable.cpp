// static class (variable)

#include<iostream>
using namespace std;
class A{
	public:
		static int count;
};
int A::count =0;
int main(){
	A obj1,obj2,obj3;
	
	cout<<"\n obj - 1:"<<A::count;
	A::count++;
	cout<<"\n obj - 2:"<<obj2.count;
	obj2.count++;
	cout<<"\n obj - 3:"<<obj3.count;
}
