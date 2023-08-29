#include<iostream>
using namespace std;
int main() {
	enum ex{
		a=0,b=5,c=10
	};
	if ( 0 == a) {
		cout << "a is 0" << endl;
	}
	else if ( 0== a) {
		cout << "b is 5"<<endl;
	}
}