#include<iostream>
using namespace std;

// ********* Inline Functions *******
// inline int product(int a, int b){ // inline function tab hi use karence jab chota sa operation ho  
// loops,switchcase,etc me inline function ka use nhi karenge
//     return a*b;
// }
// int product(int a, int b){
//     // Not recommended to use below lines inline functions 
//     static int c = 0; // This will executes only once 
//     c = c + 1;// Next time this function is run, the value of c will be retained 
//     return a*b+c;
// }

// Default Arguments 
float moneyrecieved(int currentmoney, float factor=1.04){
    return currentmoney*factor;
}
// Constant Argument
int strlen(const char *p){
    
}
int main(){
    // ******** Inline functions *********
    // int a, b;
    // cout<<"Enter the number a and b"<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;

    // ******** Default Arguments *******
    int money = 100000;
    cout<<"If you have "<<money<<" Rs in your bank account, You will recieve "<<moneyrecieved(money)<<"Rs after 1 year"<<endl;
    cout<<" For Vip ,If you have "<<money<<" Rs in your bank account, You will recieve "<<moneyrecieved(money,1.10)<<"Rs after 1 year"<<endl;


    

    return 0;
}