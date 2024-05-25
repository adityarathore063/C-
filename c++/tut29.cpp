#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    // creating a constructor
    // constructor is a special member function with the same name as of the class
    // It is used to initalize the objects of its class
    // It is automatically invoked whenever an object is created

    complex(void); // constructor  declaration

    void printnumber()
    {
        cout << "Your number is " << a << " + " << b << " i " << endl;
    }
};

complex ::complex(void) //----> This  is default constructor as it accepts no parameter
{
    a = 10;
    b = 5;
}
int main()
{

    complex c1, c2, c3;
    c1.printnumber();
    c2.printnumber();
    c3.printnumber();

    return 0;
}

/*
Characteristics of constructors
1. It should be declared in the public section of the class
2. They are automatically invoked (call) whenever the object is created 
3. They cannot return values and do not have return types 
4. It can have default arguments
5. We cannot refer to their address 
*/