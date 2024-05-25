#include <iostream>
using namespace std;

// Base class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpid)
    {
        id = inpid;
        salary = 34.0;
    }
    Employee() {}
};

// Derived class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    members/methods/etc..
};
Note:
1. Default visibility mode is private
2. public visibility mode: public members of the base class becomes public members of the derived class 
3. private visibility mode: public members of the base class becomes private members of the derived class 
4. private members are never inherited 
*/

// creating a programmer derived class from Employee base class
class programmer : public Employee
{
public:
    int languagecode = 8;
    programmer(int inpid)
    {
        id = inpid ;
    }
    void getdata()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;

    programmer skillF(23);
    cout << skillF.languagecode << endl;
    skillF.getdata();
    cout<<skillF.id<<endl;
    return 0;
}