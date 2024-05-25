#include <iostream>
using namespace std;

int main()
{

    // basic Example
    int a = 4;
    int *ptr = &a;
    cout << "The value of a is " << *(ptr) << endl;
    cout << "The address of a is " << &a << endl;
    cout << "The address of a is " << ptr << endl;

    // New operator
    int *p = new int(50);
    cout << "The value at address p is " << *(p) << endl;
    cout << "The address of new int is " << p << endl;
    cout << "The address of new int is " << new int(50) << endl;

    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 29;
    arr[2] = 56;
    // delete [] arr;

    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The vlaue of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;

    float *f = new float(68.9);
    cout << *(f) << endl;

    // delete operator
    // delete [] arr;
    return 0;
}