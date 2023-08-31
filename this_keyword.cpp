#include<iostream>
using namespace std;

class example{
    private:
        int x,y;
    public:
        example() = default;
        example(int x,int y){
            // Assigning value of the x and y to the current object instance using this keyword
            this->x =x;
            this->y = y;
            int result  = this->x +this->y;
            cout<<result<<endl;
        }
};

int main(){
    example e1(10,20);
}