#include <iostream>
using namespace std;

/*
Syntax for initialzation list in constructor:
constructor (argument-list ): initialzation-section
{
    assignment + other code
} 
class test {
    int a;
    int b;
    public:
        test(int i, int j) : a(i), b(j){
            constructor-body
        }
};
*/

class test
{
    int a;
    int b;

public:
    // test(int i, int j) : a(i), b(j)
    // test (int i, int j):a(i),b(i+j)
    // test (int i, int j):a(i),b(2*j)
    // test (int i, int j):a(i),b(a + j)
    // test (int i, int j):b(j),a(i + b) ----> RED FLAG this will create problems because (a) will be initialized first
    test(int i, int j) : a(i)

    {
        b = j;
        cout << "constructor executed " << endl;
        cout << "value of a is " << a << endl;
        cout << "value of b is " << b << endl;
    }
};
int main()
{
    test t(5, 8);
    return 0;
}