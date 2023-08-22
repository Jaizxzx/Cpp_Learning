#include<iostream>
using namespace std;
// calling lambda function with name
auto f = [](int a,int b){
    cout<<a+b<<endl;   
};
int main(){
    f(3,5);
    // calling lambda function without any name
    [](int a,int b){
    cout<<a+b<<endl;   
    }(8,9);
}