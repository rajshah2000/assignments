// class-object EG

#include<iostream>
using namespace std;
class value{
	private:
		int a;
		
		public:
			void get_value(int x){
				a=x;
			}
			int square(){
				return a*a;
			}
			int cube(){
				return a*a*a;
			}
};
int main(){
	int b;
	value obj1;
	cout<<"\n enter your value:";
	cin>>b;
	obj1.get_value(b);
	cout<<"\n sqaure:"<<obj1.square();
	cout<<"\n cube:"<<obj1.cube();
}
