#include <iostream>
using namespace std;

// Syntax for inheriting in multiple inheritence 
// class derived : visibility-mode base1, visibility-mode base2{
//     class body of derived class
// };

class base1{
    protected:
        int base1int;
    public:
        void set_base1int(int a){
            base1int = a;
        }
};
class base2{
    protected:
        int base2int;
    public:
        void set_base2int(int a){
            base2int = a;
        }
};

class derived:public base1, public base2{
    public:
        void show(void){
            cout<<"The value of Base1 is "<<base1int<<endl;
            cout<<"The value of Base2 is "<<base2int<<endl;
            cout<<"The sum of those values is "<<base1int + base2int<<endl;
        }
};
int main()
{
    derived harry;
    harry.set_base1int(25);
    harry.set_base2int(5);
    harry.show();
    return 0;
}