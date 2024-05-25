#include<iostream>
using namespace std;

class base1{
    public:
        void greet(void){
            cout<<"How are You"<<endl;
        }
};

class base2{
    public:
        void greet(void){
            cout<<"kaise ho"<<endl;
        }
};

class derived: public base1, public base2{
    int a;
    public:
        void greet(){
            base2::greet();
        }
};

class b{
    public:
        void say(){
            cout<<"hello world"<<endl;
        }
};

class d:public b{
    // d new say method will overwrite b class say method 
    public:
        void say(){
            cout<<"Hello my beautiful people "<<endl;
        }
};
int main(){
    // Ambiguity 1
    // base1 obj1;
    // base2 obj2;
    // obj1.greet();
    // obj2.greet();
    // derived d;
    // d.greet();

    // Ambiguity 2
    b c;
    c.say();
    d e;
    e.say();
    return 0;
}