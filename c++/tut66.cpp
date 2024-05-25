#include<iostream>
using namespace std;

// Syntax of template with Default parameter
template < class T1 = int, class T2 = char>
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

    myclass <> obj(1, 'c');
    obj.display();

    myclass <  float, char > obj2(3.56, 'D');
    obj2.display();

    return 0;
}