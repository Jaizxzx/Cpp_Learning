#include<iostream>
// The below include is to include the custom header file we made named as class_header.h which has the class and its definition.
//#include "class_header.h"
using namespace std;
class cylinder{
    public :
        cylinder() = default; 
        // Constructor
        cylinder(double xx,double yy){
            a = xx + yy;
            b= xx*yy;
        } 
       /*
        int get_a(){
            return a;
        }
        int set_b(int x,int y){
            a=x+y;
            b=x*y;
            return (a+b);
        }
        // Default Constructor 
        //cylinder()=default;
        */
    int volume(){
    auto vol = 3.14*a*b;
    return vol;
}

    public :
        int a=10;
        int b=20;
    
};



int main(){
    // Declaring or passing parameters for the constructor
    //cylinder c(29.08,239.80);
    // Declaring empty object class for get and set
    cylinder c(10,20);
    c.volume();
    // Creating and managing the oject using pointers for stack memory.
    cylinder* c1 = &c;
    // printing the value using the above pointer
    cout<<c1 ->volume()<<endl; //or we can use a complex syntax like cout<<(*c1).volume<<endl;
    // Allocating Heap Memory and Creating and managing the oject using pointers
    cylinder* c2= new cylinder(10,20);
    // Printing the value from the heap memory
    cout<<c2 -> volume()<<endl;
    // Volume befor the set and get has been executed
    /*cout<<c.volume()<<endl;
    cout<<c.set_b(23,32)<<endl;
    cout<<c.get_a()<<endl;
    // Volume after the variable b is set to some new value
    cout<<c.volume()<<endl;
    */
    // Remember to delete and free the heap memory after use
    //delete c2;

    
    delete c2;
}

