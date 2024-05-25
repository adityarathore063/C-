#include<iostream>
using namespace std;

// Syntax of template with multiple parameter
/*
template < class T1, class T2>
class naameofclass{
    // body
};
*/
template < class T1, class T2>
class myclass{
    public:
        T1 data1;
        T2 data2;

        myclass(T1 a, T2 b){
            data1 = a;
            data2 = b;
        }

        void display(){
            cout<<this->data1<<endl;
            cout<<this->data2<<endl;
        }

};
int main(){

    myclass <int, char> obj(1, 'c');
    obj.display();

    return 0;
}