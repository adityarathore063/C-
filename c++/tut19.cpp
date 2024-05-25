#include<iostream>
using namespace std;

// Function Overloading 
int sum(int a, int b){
    cout<<"using Function with 2 arguments "<<endl;
    return a+b;
}
int sum(int a, int b, int c){
    cout<<"Using Function with 3 arguments "<<endl;
    return a+b+c;
}

int main(){
    cout<<"The sum of 4 and 6 is "<<sum(4,6)<<endl;
    cout<<"The sum of 4, 5 and 6 is "<<sum(4,5,6)<<endl;

    return 0;
}