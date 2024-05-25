#include<iostream>
using namespace std;

class baseclas{
    public:
        int var_base = 45;
        virtual void display(){
            cout<<"Displaying1 base class variable var_base "<<var_base<<endl;
        }
};

class derivedclass:public baseclas{
    public:
        int var_derived = 67;
        void display(){
            cout<<"Displaying2 base class variable var_base "<<var_base<<endl;
            cout<<"Displaying2 derived class variablr var_derived "<<var_derived<<endl;
        }
};

int main(){

    baseclas *base_class_pointer;
    baseclas obj_base;
    derivedclass obj_deriveed;

    base_class_pointer = &obj_deriveed;
    base_class_pointer->display();

    return 0;
}