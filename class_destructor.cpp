#include<iostream>
using namespace std;
class  c1
{
public:
    int a = 10;
    int b=20;
    c1() = default;
    c1(int x,int y);
    ~ c1();
    int c2(int q, int p){
        cout<<" function "<< 10<<endl;
        return (q*p+q*p);
    }
};

 c1:: c1(int x, int y)
{
    cout<<"constructor was called "<<x+y<<endl;
}
 c1::~ c1()
{
    cout<<"destructor was called deleting the dynamic pointer memory alloacated to p or n "<<endl;
}
int main(){
    c1 *p = new c1(20,30);
    cout<<"constructor was called for object 1"<<p ->c2(10,10) <<endl;
    c1 *n = new c1(200,300);
    cout<<"constructor was called for object 2"<<n ->c2(20,20) <<endl;
    delete p;
    delete n;
}