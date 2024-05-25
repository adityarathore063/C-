#include<iostream>
using namespace std;

int main(){
    int a= 3;
    int* b = &a;
    // & ------ Address of operator
    cout<<"The Address of a is " <<b<<endl;
    cout<<"The Address of a is " <<&a<<endl;
    // Both of upper statement give the same result

    // *----- Dereference operator
    cout<<"The value at adress b is "<<*b<<endl;

    // Pointer to pointer 
    int** c = &b;
    cout<<"The Address of b is " <<c<<endl;
    cout<<"The Address of b is " <<&b<<endl;
    cout<<"The value at address c is "<<*c<<endl;
    cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl;



    return 0;
}   