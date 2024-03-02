// Abstract class Eg

#include<iostream>
using namespace std;
class vehicle{
	protected:
		virtual void enginee()=0;
};
class car:public vehicle{
	public:
		void enginee(){
			cout<<"\n car enginee";
		}
};
class truck:public vehicle{
	public:
		void enginee(){
			cout<<"\n truck enginee";
		}
};
int main(){
	car c1;
	c1.enginee();
	truck t1;
	t1.enginee();
}
