#include<iostream>
using namespace std;
int main(){
    int a = 3;
    int *p = new int [a];
    
    /*p[0] = 1;
    p[1] = 2; 
    p[2] = 3;*/

    int i;
    for(i=0;i<=2;i++){
        cin>>p[i];
    }

    for(i=0;i<=2;i++){
        cout<<p[i]<<endl;
    }

    delete [] p;
}