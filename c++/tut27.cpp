#include <iostream>
using namespace std;

// Forward declaration
class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumrealcomplex(complex, complex);
    int sumcompcomplex(complex, complex);
};

class complex
{
    int a, b;
    // // Individually declaring functions as friends
    // friend int calculator ::sumrealcomplex(complex, complex);
    // friend int calculator ::sumcompcomplex(complex, complex);

    // Aliter: declaring the entire class (calculator) as a friend
    friend class calculator;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printnumber()
    {
        cout << "Your Number is " << a << " + " << b << "i" << endl;
    }
};

int calculator ::sumrealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int calculator ::sumcompcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;
    o1.setnumber(1, 4);
    o2.setnumber(5, 7);
    calculator calc;
    int result = calc.sumrealcomplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << result << endl;
    int result_c = calc.sumcompcomplex(o1, o2);
    cout << "The sum of complex part of o1 and o2 is " << result_c << endl;

    return 0;
}