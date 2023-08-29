/*
#include<iostream>
using namespace std;
int main(){
    static int x{5};
    for(static int i =0; i<x;i++){
        x++;
    }
    cout<<x<<endl;
}
*/
#include <iostream>
using namespace std;

void demo() {
    static int count = 0;
    cout << count << " ";
    count++;
}

int main() {
    for (int i = 0; i < 10; i++)
        demo();
    return 0;
}
