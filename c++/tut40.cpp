#include<iostream>
using namespace std;

class student{
    protected:
        int roll_number;
    public:
        void set_roll_number(int);
        void get_roll_number(void);
};

void student::set_roll_number(int r){
    roll_number = r;
}

void student ::get_roll_number(void){
    cout<<"The roll number is "<<roll_number<<endl;
}

class exam:public student{
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float m1, float m2){
            maths = m1;
            physics = m2;
        }
        void get_marks(void){
            cout<<"The marks obtained in maths are: "<<maths<<endl;
            cout<<"The marks obtained in physics are: "<<physics<<endl;
        }
};

class result: public exam{
    float percentage;
    public:
        void display(void){
            get_roll_number();
            get_marks();
            cout<<"Your result is "<<(maths + physics )/2<<"%"<<endl;
        }
};
int main(){

    result aditya;
    aditya.set_roll_number(4);
    aditya.set_marks(95.0, 96.0);
    aditya.display();

    return 0;
}
/*
Notes:
    If we are inheriting B from A and C from B:[ A--->B--->C]
    1. A is the base class for B and B is the base class  for c
    2. A--->B--->C is called Inheritence path 
*/