/*
1. Assume a class cricketer is declared. Declare a derived class batsman from cricketer. Data member of batsman
	Total runs, Average runs and best performance. Member function input data, calculate average runs, 
	Display data(single inheritance)
*/

#include<iostream>
using namespace std;

class cricketer{

	protected:
	
		int i;
		float run[5];
		char name[50];
		
	public:
		void get() {
			cout<<"Enter Your Name : ";
			cin>>name;
			for(i=1;i<=5;i++){
				cout<<"Enter Runs : ";
				cin>>run[i];
			}
		}
};

class batsman:public cricketer{
    
	private:  
	
		float avg_run=0,total_run=0,best_per=0;
		
	public:
	
		void get_data() {
			for(i=0;i<6;i++){
				total_run += run[i];
			}
			
			cout<<"\nTotal 5 Match Run is : "<<total_run;
			
			avg_run = total_run/5;
			
			cout<<"\nAverage Run of 5 Match is : "<<avg_run;
			
			for(i=0;i<=5;i++){
				// best_per = run[i];
				run[i] > best_per;
				best_per = run[i];
			}
			cout<<"\nBest Performace is : "<<best_per;		
		}
};

int main () {
	
	batsman a;
	
	a.get();
	a.get_data();
	
	return 0;
	
}
