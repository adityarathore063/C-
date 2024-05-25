#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
        void setnumber(int n1, int n2){
            a = n1;
            b = n2;
        }
        // Below lines means that non member - sumcomplex function is allowed to do anything with my private data(members) 
        friend complex sumcomplex(complex o1, complex o2);
        void printnumber(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

complex sumcomplex(complex o1, complex o2){
    complex o3;
    o3.setnumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main(){
    complex c1, c2, sum;
    c1.setnumber(1, 4);
    c2.setnumber(5, 8);

    c1.printnumber();
    c2.printnumber();
    
    sum = sumcomplex(c1, c2);
    sum.printnumber();
    return 0;
}

//  Properties of Friend function 
// 1. Not in the scope of class
// 2. since it is not in the scope of the class, it cannot be called from the object of that class . => c1.sumcomplex() == Invalid 
// 3. can be invoked without the help of any object 
// 4. usually contains the objects as arguments 
// 5. can be declared inside public or private section of the class 
// 6. It cannot access the members directly by their names and need object_name.member_name to access any member 