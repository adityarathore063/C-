#include<iostream>
using namespace std;

// ******** Functions in c++ *********
// int sum(int a, int b){
//     int c = a + b;
//     return c;
// }

// Function Prototypes
// syntax:
// type function-name (arguments);
// int sum(int a,int b); ------- Accepetable
// int sum(int a, b); ------- Not Acceptable
int sum(int ,int );// ------- Acceptable
// void g();// acceptable
void g(void);//acceptable
int main(){
    int num1, num2;
    cout<<"Enter the num1 "<<endl;
    cin>>num1;
    cout<<"Enter the num2 "<<endl;
    cin>>num2;
    // num1 and num2 are actual parameter 
    cout<<"The sum is "<<sum(num1,num2)<<endl;
    g();

    return 0;
}
     // kavi kavi function ko main function ke baad me rakhna hota hai iske liye function prototype ka use karte hai
    // Function 
    int sum(int a,int b){
        // Formal parameter a and b will be taking values from actual parameter num1 and num2 
        int c = a + b;
        return c;
    }
    // jaaruri nhi ki hamesa function value return hin kare 
    void g(){
        cout<<"Hello,Good Morning "<<endl;
    }
