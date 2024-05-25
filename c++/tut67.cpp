#include<iostream>
using namespace std;

template<class T1, class T2>
float average(T1 a, T2 b){
    float d = (a + b)/2.0;
    return d;
}
int main(){

    cout<<"The average of this number is "<<endl;
    cout<<average(3, 4)<<endl;

    return 0;
}