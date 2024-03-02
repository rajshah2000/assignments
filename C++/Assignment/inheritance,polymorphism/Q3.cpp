/*
3. Create a class person having members name and age. Derive a class student having member percentage. Derive another class teacher having member salary. Write necessary member function to initialize, read and write data. Write also main function. (Multiple Inheritance)
*/

#include <iostream>
using namespace std;

class person {
    
    protected: 
        int age;
        char name[50];
        
    public:
        
        void get_person(){
            cout<<"Enter Name : ";
            cin>>name;
            cout<<"Enter Age : ";
            cin>>age;
        }
        
        void print_person() {
            cout<<"Person Name is : "<<name<<".\tPerson Age is : "<<age;
        }
};

class student {
    
    protected:
        float per;
        char s_name[50];
        
    public:
        void get_student(){
            cout<<"\nEnter Student Name : ";
            cin>>s_name;
            cout<<"Enter Student Percentage : ";
            cin>>per;
        }
        
        void print_student(){
            cout<<"Student Name is : "<<s_name<<".\tStudent Percenatge is : "<<per;
        }
};

class teacher : public person,public student {
    
    protected:
    
        int salary;
        char t_name[50];
        
    public:
        void get_teacher() {
            cout<<"\nEnter Teacher Name : ";
            cin>>t_name;
            cout<<"Enter Salary : ";
            cin>>salary;
        }
        
        void print_teacher() {
            cout<<"Teacher Name is : "<<t_name<<".\tTeacher Salary is : "<<salary;
        }
};

int main() {
    
    teacher a;
    
    a.get_person();
    a.print_person();
    a.get_student();
    a.print_student();
    a.get_teacher();
    a.print_teacher();

    return 0;
}
