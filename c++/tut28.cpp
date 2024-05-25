#include<iostream>
using namespace std;

class Y;

class x{
    int data;
    public:
        void setvalue(int value){
            data = value;
        }
        friend void add(x, Y);
};

class Y{
    int num;
    public:
        void setvalue(int value){
            num = value;
        }
        friend void add(x, Y);
};

void add(x o1, Y o2){
    cout<<"summing data of x and Y objects gives me "<<o1.data + o2.num<<endl;
}
int main(){

    x a1;
    a1.setvalue(3);
    Y b1;
    b1.setvalue(5);

    add(a1,b1);
    

    return 0;
}