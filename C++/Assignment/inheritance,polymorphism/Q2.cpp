/*
2. Write a C++ Program to find Area of Rectangle using Inheritance
*/

#include <iostream>
using namespace std;

class area{
    protected:
        int w,l,area;
        
    public:
    void get_data(){
        cout<<"Enter the value of W : ";
        cin>>w;
        cout<<"Enter the value of L : ";
        cin>>l;
    }

};

class value:public area{
    public:
    void print_data(){
        area = w*l;
        cout<<"The Area of Rectangle is : "<<area;
    }
    
};

int main() {
    
    value a;
    
    a.get_data();
    a.print_data();

    return 0;
}
