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
        complex operator-(){
            complex temp;
            temp.x = -x;
            temp.y = -y;
            return temp;
        }
};
int main(){

    complex c1, c2;
    c1.setdata(4, 5);
    c2=-c1;
    // c2= c1.operator-(); you can also write this type
    c2.getdata();
    return 0; 
}