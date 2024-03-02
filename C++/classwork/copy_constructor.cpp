// copy constructor

#include<iostream>
using namespace std;
class A{
	public:
		int x,y;
		
		A(){
			cout<<"\n simple constructor";
		}
		A(int p,int q){
			x=p;
			y=q;
		}
		A(constant A &obj1){
			x=obj1.x;
			y=obj1.y;
		}
		void printf(){
			cout<<"\n x="<<x"\n y="<<;
		}
		
};
int main(){
	A obj3;
	int a=10,b=20;
	A obj1(a,b);
	A obj2(obj1);
	obj2.printf();
}
