#include<iostream>
using namespace std;
/*
int main(){
    const int* a = new int(5);
    const int max = 90;
    a=4; // Error
    // Making pointer to point to max
    a=(int*)&max;
    cout<<*a<<endl;
    delete a;
    // This will make us able to change the value but not what the pointer is pointing to.
    int* const b = new int(4);
    b=5; // will run succesfully and assign the value 5
    int max = 10;
    b = (int*)&max; // Error

    // This will make us unable to change the value inside the pointer or the loaction to // which the pointer is pointing to.
    const int* const c = new int;
    c = 5; // Error
    int max = 10;
    c = (int*)&max; // Error

    // This will ensure that the function or method in the specific function inside the   // class will not modify any value.
    class test{
    	private:
    		int x;
    	public:
    		// This will give an error as we are modifying the value of x.
    		int multiply(int x) const{
    			x = x*5;
    		}
    };
}
*/