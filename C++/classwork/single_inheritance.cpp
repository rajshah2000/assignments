// single inheritance

#include<iostream>
using namespace std;
class A{
	public:
		int a;
		void funA(){
			cout<<"\n function of class A";
		}
};
class B:public A{
	public:
		int b;
		void funB(){
			cout<<"\n fuction of class B";
		}
};
int main(){
	B objB;
	objB.a=10;
	objB.b=10;
	objB.funA();
	objB.funB();
	A objA;
}
