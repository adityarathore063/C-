#include<iostream>
using namespace std;

class student{
    protected:
        int roll_number;
    public:
        void set_roll_number(int a){
            roll_number = a;
        }
        void print_number(void){
            cout<<"Your roll no. is "<<roll_number<<endl;
        }
};

class test:virtual public student{
    protected:
        float maths, physics;
    public:
        void set_marks(float m1, float m2){
        maths = m1;
        physics = m2;
    }
        void print_marks(void){
            cout<<"Your result is here:"<<endl;
            cout<<"Maths: "<<maths<<endl;
            cout<<"Physics: "<<physics<<endl;
        }
};

class sports:virtual public student{
    protected:
        float score;
    public:
        void set_score(float sc){
            score  = sc;
        }
        void print_score(void){
            cout<<"Your PT score is: "<<score<<endl;
        }
};

class result:public test, public sports{
    private:
        float total;
    public:
        void display(void){
            total = maths + physics + score;
            print_number();
            print_marks();
            print_score();
            cout<<"Your total score is: "<<total<<endl;
        }
};

int main(){

    result aditya;
    aditya.set_roll_number(4);
    aditya.set_marks(89.6, 98.0);
    aditya.set_score(8);
    aditya.display();

    return 0;
}