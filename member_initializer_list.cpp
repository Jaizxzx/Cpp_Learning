#include<iostream>
using namespace std;

class example{
    private:
        int x, y, z;
    public:
        // Member initializer list
        example(): x(0), y(10), z(100){
            int add = x+y+z;
            cout<<add<<endl;
        }

};

int main(){
    example e;
    e;
    return 0;
}