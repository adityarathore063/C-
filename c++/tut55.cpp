#include<iostream>
using namespace std;

class baseclas{
    public:
        int var_base;
        void display(){
            cout<<"Displaying1 base class variable var_base "<<var_base<<endl;
        }
};

class derivedclass:public baseclas{
    public:
        int var_derived;
        void display(){
            cout<<"Displaying2 base class variable var_base "<<var_base<<endl;
            cout<<"Displaying2 derived class variablr var_derived "<<var_derived<<endl;
        }
};
int main(){

    baseclas * base_class_pointer;
    baseclas obj_base;
    derivedclass obj_derived;
    base_class_pointer = &obj_derived;// pointing base class pointer to derived class object

    base_class_pointer->var_base = 34;
    // base_class_pointer->var_derived = 134; // will throw an error

    base_class_pointer->display();// it will run the display function of baseclass not derived class because base_class_pointer
    // is the pointer of base class

    derivedclass * derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_derived = 456;
    derived_class_pointer->display();
    return 0;
}