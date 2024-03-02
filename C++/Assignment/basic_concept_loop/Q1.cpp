/* 1.
WAP to create simple calculator using class
*/

#include<iostream>

using namespace std;
class cal{
	private:
		int a,b;
	public:
		void get_value(int x,int y){
			a=x;
			b=y;
		}
		int add(){
			return a+b;
		}
		int sub(){
			return a-b;
		}
		int mul(){
			return a*b;
		}
		int div(){
			return a/b;
		}
};

int main(){
	cal sum;
	int choice,m,n,result;
	
		cout<<"\nenter value A:";
		cin>>m;
		cout<<"\nenter value B:";
		cin>>n;
		cout<<"\n1.addition\n2.substraction\n3.multiplication\n4.division";
		cin>>choice;
		sum.get_value(m,n);
		switch(choice){
			case 1:
				cout<<sum.add();
				break;
			case 2:
			    cout<<sum.sub();
			    break;
			case 3:
			    cout<<sum.mul();
			    break;
			case 4:
			    cout<<sum.div();
			    break;
			    default:
			    	cout<<"wrong choice:";
		}
		
}
