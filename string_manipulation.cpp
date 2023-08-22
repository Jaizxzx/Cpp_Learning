#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int n = 3;
    char p[] = {"Singh awif"};
    char z[] = {"Singj"};
    //cout<<strlen(p)<<sizeof(p);   
    /*cout<<strcmp(p,z)<<endl; 
    cout<<strncmp(p,z,n)<<endl;
    cout<<strchr(p,'i')<<endl;
    cout<<strrchr(p,'i' )<<endl;
    */
   cout<<strncat(p,z,n)<<endl;   
   
} 