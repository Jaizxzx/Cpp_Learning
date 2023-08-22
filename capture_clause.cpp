#include<iostream>
using namespace std;
/*int main(){
    int a = 10;
    int b =20;
    // capture clause pass by value 
    auto f = [a,b](){
        cout<<a+b<<endl;
        };
    f();
    cout<<a<<b<<endl;
    // capture clause pass by reference
    auto fi = [&a,&b](){
        a = a+b;
        cout<<a+b<<endl;
        };
    fi();
    cout<<a<<b<<endl;
    //capture by mixed,i.e, by both values and references
    auto fii = [a,&b](){
        b = b+a;
        cout<<a+b<<endl;
        };
    fii();
    cout<<a<<b<<endl;
}*/
// ##Capture all by value (we can capture everything outside the lambda function by value by using the folowing method)
/*int main(){
    int a=12,b=24,c=36;
    auto fiif = [=](){
        cout<<a+b+c<<endl;
    };
    fiif();
    // ##Capture all by reference (we can capture everything outside the lambda function by reference by using the folowing method)
    int p=15,q=25,r=35;
    auto fiifi = [=](){
        cout<<p+q+r<<endl;
    };
    fiifi();
}*/