#include<iostream>
#include<string>
using namespace std;

class player_data
{
private:
    /* data */
    string f_name{"Jai"};
    string l_name{"Singh Rathore"};
public:
    player_data(/* args */) = default;
    player_data(int x,int y){
        cout<<"Position of the player is : "<<x<<" in x axis "<<y<<" in y axis "<<endl;
        cout<<"Name of the player is : "<<f_name<<" "<<l_name<<endl;
    }
    virtual int ff(){
        cout<<"ff was called"<<endl;
        return 0;
    }
    ~player_data(){
        cout<<"\nDestructor called\n";
    };
};

class player_body : public player_data{
    public:
        int ff() override {
            cout<<"ff was overriden by base class"<<endl;
            return 1;
        }
};
int main(){
    player_data p(5,10);
    p.ff();
    player_body q;
    q.ff();
}