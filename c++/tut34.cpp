#include<iostream>
using namespace std;

class number{
    int a;
    public:
        number(){
            a = 0;
        }
        number(int num){
            a = num;
        }
        // when no copy constructor is found, compiler supplies own copy constructor
        number(number &obj){
            cout<<"copy constructor is called"<<endl;
            a = obj.a;
        }
        void display(){
            cout<<"The number for this object is "<<a<<endl;
        }
};
int main(){

    number x, y(46), z, z2;
    x.display();
    y.display();
    z.display();
    number z1(y); // copy constructor invoked
    z1.display();

    z2 = y;// copy constructor not called
    z2.display();

    number z3 = y;// copy constructor invoked
    z3.display();

    // z1 should exactly resamble z or x or y
    return 0;
}