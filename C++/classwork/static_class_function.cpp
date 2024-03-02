// static class function

#include<iostream>
using namespace std;
class A{
	public:
		static int count;
		int a,b;
		static void func(int x){
			count=x;
		}
		int printCount(){
			return count;
		}
};
int A::count =0;
int main(){
	A obj1,obj2;
	A::func(10);
	cout<<obj1.printCount();
	A::func(20);
	cout<<obj2.printCount();
}
