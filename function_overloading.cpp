#include<iostream>
using namespace std;
int m(int a,int b){
    int v = (a>b)?a:b;
    cout<<v<<endl;
}
double m(double a,double b){
    double z = (a>b)?a:b;
    cout<<z<<endl;
}
int main(){
    int x{10},y{23};
    double a{10.23};
    double b{230.24};
    m(x,y);
}