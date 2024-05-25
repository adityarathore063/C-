#include<iostream>
using namespace std;

// int sum(int a, int b){
//     int c = a + b;
//     return c;
// }
// ********** call by value ***********
// // This wil not swap a and b
// void swap(int a, int b){
//     int temp = a;
//     a = b;
//     b = temp;
// }
// call by reference using pointer 
// void swappointer(int* a, int*b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// ************** call by reference using c++ reference variables *********
void swapreferencevar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){

    int a = 4;
    int b = 5;
    // cout<<"The sum of a and b is "<<sum(a, b)<<endl;
    // cout<<"The value of a is "<<a<<endl;
    // cout<<"The value of b is "<<b<<endl;
    // swap(a, b);// This will not swap a and b
    // cout<<"The value of a is "<<a<<endl;
    // cout<<"The value of b is "<<b<<endl;
    // swappointer(&a, &b);  // This will swap a and b using pointer reference 
    // cout<<"The value of a is "<<a<<endl;
    // cout<<"The value of b is "<<b<<endl;
    swapreferencevar(a, b);// This will swap a and b using reference variables
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;




    return 0;
}