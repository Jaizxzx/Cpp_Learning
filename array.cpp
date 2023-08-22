#include<iostream>
using namespace std;
int main(){
    int array[5];
    for (int i=0;i<5;i++){
        cin>>array[i];
    }
    for (int i=0;i<=5;i++){
         cout<<array[i]<<endl;
    }
    // 
    cout<<sizeof(array)/sizeof(0)<<endl;
}