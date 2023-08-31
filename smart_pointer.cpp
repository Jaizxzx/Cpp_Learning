#include<iostream>
#include<memory>
using namespace std;

class example{
    private:
        int x, y;
    public:
        example() = default;
        example(int x , int y){
            int result = x + y;
            cout<<result<<endl;
        }
        void unique_ptr_called(){
            cout<<"Unique Pointer was called"<<endl;
        }
};

int main(){
    example e(10,20);
    example ee(20,30);
    // Here the smart pointer is being assigned to an object of the example class but this pointer will get destroyed
    // once we go out of the scope means{}.
    unique_ptr<example> p = make_unique<example>(e);
    p->unique_ptr_called();
    // Here the shared pointer is being assigned to another object ee from the example class which can be shared with other shared pointer 
    shared_ptr<example> pp = make_shared<example>(ee);
    // We are creating a shared pointer which will then be assigned to another shared pointer.
    shared_ptr<example> eee;
    eee = pp; 
    eee->unique_ptr_called();
}