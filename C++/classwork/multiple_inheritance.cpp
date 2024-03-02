// Multiple inheritance

#include<iostream>
using namespace std;
class student{
	protected:
		int rollno,maths,sci,eng;
		string name;
		public:
			void get_sub_marks(int a,int b,int c,int d,string e){
				rollno=a;
				maths=b;
				sci=c;
				eng=d;
				name=e;
			}
};
class activity{
	protected:
		int sports,music;
		public:
			void get_act_marks(int a,int b){
				sports=a;
				music=b;
			}
};
class result:public student,public activity{
	private:
		int total;
		public:
			void cal_total(){
				total=sci+maths+eng+sports+music;
			}
			void print_rsult(){
				cout<<"\n rollno:"<<rollno<<"name:"<<name<<"total:"<<total;
			}
};
int main(){
	result r1;
	r1.get_sub_marks(1,50,50,50,"jeel");
	r1.get_act_marks(50,50);
	r1.cal_total();
	r1.print_rsult();
}
