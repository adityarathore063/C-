#include<iostream>
using namespace std;

int main(){
    // **********Arrays**********

    // Repersentation type 1

    // int marks[] = {56,78,89,89,67};
    // cout<<"These are marks "<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // cout<<marks[4]<<endl;
    // Repersentation type 2
    int mathmarks[4];
    mathmarks[0] = 45;
    mathmarks[1] = 56;
    mathmarks[2] = 78;
    mathmarks[3] = 67;
    
    // you can change the value of an  arrays before printing 
    // mathmarks[2] = 90;
    // cout<<"These are mathmarks "<<endl;
    // cout<<mathmarks[0]<<endl;
    // cout<<mathmarks[1]<<endl;
    // cout<<mathmarks[2]<<endl;
    // cout<<mathmarks[3]<<endl;

    // Printing the value of an array with the help of loop
    // // using for loop
    // for(int i=0;i<4;i++){
    //     cout<<"The value of the mathmarks "<<i<<" is "<<mathmarks[i]<<endl;
    // }

    // using while loop
    // int i=0;
    // while (i<4)
    // {       
    //  cout<<"The value of the mathmarks "<<i<<" is "<<mathmarks[i]<<endl;
    //  i++;
    // }

    // using do while loop
    // int i=0;
    // do
    // {
    // cout<<"The value of the mathmarks "<<i<<" is "<<mathmarks[i]<<endl;
    // i++;
    // } while (i<4);

    // Pointer and Arrays
    int* p = mathmarks; // right hai 
    // int* = &mathmarks ------ wrong hai
    // cout<<" The address of mathmarks[0] is "<<p<<endl;
    // cout<<" The address of mathmarks[0] is "<<mathmarks<<endl;
    // cout<<" The address of mathmarks[1] is "<<(p+1)<<endl;
    // cout<<" The address of mathmarks[1] is "<<(mathmarks+1)<<endl;
    // cout<<" The address of mathmarks[2] is "<<(p+2)<<endl;
    // cout<<" The address of mathmarks[2] is "<<(mathmarks+2)<<endl;
    // cout<<" The address of mathmarks[3] is "<<(p+3)<<endl;
    // cout<<" The address of mathmarks[3] is "<<(mathmarks+3)<<endl;
    
    // cout<<"The value of *p is "<<*p<<endl;
    // cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    // cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    // cout<<"The value of *(p+3) is "<<*(p+3)<<endl;

   cout<<*(p++)<<endl;
   cout<<*(++p)<<endl; 


    return 0;
}