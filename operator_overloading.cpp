#include<iostream>
using namespace std;

struct example{
    float x, y;
    example() = default;
    example(float x,float y) : x(x), y(y){}
    // This function is taking an object of the class example as an input and also giving output of an object also 
    example add(const example& aa ){
        return example(x + aa.x,y + aa.y); 
    }
    // This will tell our '+' operator to what to do with two objects of class.
    example operator+ (const example& aa) {
        return add(aa);
    }
};
int main(){
    example e1(10,20);
    example e2(30,40);
    example result = e1 + e2;
}