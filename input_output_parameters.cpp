#include<iostream>
using namespace std;
// Using Reference (Recommended)
/*
int m(const int a, const int b, int& c){
    if (a>b){
        c = a;
    }
    else{
        c = b;
    }
}
int main(){
    int x = 10;
    int y = 23;
    int z = 100;
    int &v = z;
    m(x,y,v);
    cout<<v<<endl;
}
*/
// Using Pointer (Not recommended)
/*
int m(const int a, const int b, int *c){
    if (a>b){
        *c = a;
    }
    else{
        *c = b;
    }
}
int main(){
     int x = 10;
    int y = 23;
    int z = 100;
    int *v = &z;
    m(x,y,v);
    cout<<*v<<endl;
}
*/