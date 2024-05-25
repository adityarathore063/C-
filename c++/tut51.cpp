#include<iostream>
using namespace std;

class complex{
    int real, imiginary;
    public:
        void setdata(int a, int b){
            real = a;
            imiginary = b;
        }
        void getdata(){
            cout<<"The real part is "<<real<<endl;
            cout<<"The imiginary part is "<<imiginary<<endl;
        }
};
int main(){

    complex c1;
    c1.setdata(1, 56);
    c1.getdata();
    // Pointer to objects
    // complex *ptr = &c1; // or
    complex *ptr = new complex;
    // (*ptr).setdata(1, 56);// is exactly same  as 
    ptr->setdata(1, 56); // using arrow operator ->
    // (*ptr).getdata(); is good as 
    ptr->getdata();

    // Array of objects 
    complex *ptr1 = new complex[4];
    ptr1->setdata(1, 5);
    ptr1->getdata();
    return 0;
}