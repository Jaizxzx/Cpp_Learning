#include<iostream>
#include<concepts>
#include<type_traits>
using namespace std;
//syntax 1
/*template <integral T> T kk(T a,T b){
    T l = (a>b)?a:b;
    cout<<l<<endl;
    return 0;
}*/
//syntax 2
/*template <typename T> requires integral <T> kk(T a,T b){
    T l = (a>b)?a:b;
    cout<<l<<endl;
    return 0;
}*/
// Custom concepts
template <typename T>
concept mmm = requires(T a,T b){
    a*b;
};
//Nested Custom concepts
/*template <typename T>
concept aaaaa= requires(T a){
    sizeof(a)< 40;
    requires sizeof(a) <40;
};*/
//Custom calling or using temp
/*template <typename T>
requires aaaaa<T>
T aaa(T a,T b){
    T l = (a>b)?a:b;
    cout<<l<<endl;
    return 0;
};*/
// Using logical operators with template and concepts 
template <typename T> 
requires mmm<T> && integral<T>
T xxx(T a,T b){
    T p = a*b;
    cout<<p<<endl;
    return 0;
};
int main(){
    int x=10,y=20;
    double z = 2.2324,q=343.5352;
    char a='a',b='s';
    /*kk(x,y);
    //The below call will generate error because it is not giving an integral type input.
    //kk(z,q);
    kk(a,b);*/
    //aaa(x,y);
    xxx(x,y);
}
