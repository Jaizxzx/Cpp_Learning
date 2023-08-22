#include<iostream>
#include<cstring>
#include<string>
using namespace std;
template <typename T> T ff(T a,T b){
    T l = (a>b)?a:b;
    cout<<l<<endl;
}
//template specialisation for the above template is given below
template<>
const char * ff<const char*>(const char * a,const char * b){
    const char * l = (strcmp(a,b)>0)?a:b;
    cout<<l<<endl;
}
//Template definiton by reference
template <typename T> T& fff(T& a,T& b){
    T ll= (a>b)?a:b;
    cout<<ll<<endl;
}
int main(){
    int x =90, y=890;
    int &j =x,&k =y;
    float z = 324.456,v = 33151.566;
    const char  * m ="afdaadaf", * n="afaca";
    /*  Here by using function template we avoid writing the code again and again for the function overload 
        and we can call the function at any time with different datatypes  */
    ff(x,y);
    ff(z,v);
    ff(m,n);
    // The below function call will generate error because the types entered at same time should be same
    //ff(x,v);
    //Passing by reference in template function
    ff(j,k);
    // Explicitly or forcefully converting the type in a template function
    ff<double>(x,z);
    ff<int>(x,z);
    fff(x,y);
}
