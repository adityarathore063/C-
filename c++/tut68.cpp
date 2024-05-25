#include<iostream>
using namespace std;

template<class T>
class harry{
    public:
        T data;
        harry(T a){
            data = a;
        }
        void display();
};
// Another declaration of function 
template<class T>
void harry<T> :: display(){
    cout<<data<<endl;
}

// Overloading template function 
void func(int a){
    cout<<"I am first func() "<<a<<endl;
}

template<class T>
void func(T a){
    cout<<"I am templatised func() "<<a<<endl;
}
int main(){

    // // harry<int> h1(5);
    // // harry<char>h1('c');
    // harry<float>h1(3.5);
    // cout<<h1.data<<endl;
    // h1.display();

    func(4);// Exact match is first priority
    func<int>(4);
    return 0;
}