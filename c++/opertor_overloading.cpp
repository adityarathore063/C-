#include<iostream>
using namespace std;

class complex{
    int x, y;
    public:
        void setdata(int a, int b){
            x = a;
            y = b;
        }
        void getdata(){
            cout<<"a = "<<x<<" and b = "<<y<<endl;
            
        }
        complex operator+(complex c){
            complex temp;
            temp.x = x + c.x;
            temp.y = y + c.y;
            return temp;
        }
};
int main(){

    complex c1, c2, c3;
    c1.setdata(4, 5);
    c2.setdata(4, 5);
    // c3 = c1+c2; // it is also be used
    c3 = c1.operator+(c2);
    c3.getdata();

    return 0;
}