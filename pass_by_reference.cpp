#include<iostream>
using namespace std;
int a(int &p){
    p = 10;
    cout<<p<<endl;
}
int main(){
    int q= 2;
    int &x = q;
    a(x);
    cout<<q<<endl;
}