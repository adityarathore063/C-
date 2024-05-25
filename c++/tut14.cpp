#include<iostream>
using namespace std;
    // //*************** structure in c++ ***************
    // struct employee
    // {
    //     /* data */
    //     int eId;
    //     char favchar;
    //     float salary;
    // };

    // shortcut way to use structure
    // typedef struct employee
    // {
    //     /* data */
    //     int eId;
    //     float salary;
    // } ee;

    // *************** Unions in c+++++ **********
    // union money
    // {
    //     /* data */
    //     int rice;
    //     char car;
    //     float pounds;
    // };
      
int main(){
    // struct employee gaurav;
    // gaurav.eId = 1;
    // gaurav.favchar = 'n';
    // gaurav.salary = 3456789;

    // cout<<gaurav.salary<<endl;
    // cout<<gaurav.favchar<<endl;
    // cout<<gaurav.eId<<endl;
    // // We can make many employee here like
    // struct employee rohit;
    // rohit.salary = 5678;
    // cout<<rohit.salary<<endl;

    // struct employee aditya;
    // aditya.eId = 3;
    // cout<<aditya.eId<<endl;

    // struct employee arunjay;
    // arunjay.favchar = 't';
    // cout<<arunjay.favchar<<endl;

    // ***** shortcut structure 
    // ee arunjay;
    // arunjay.salary = 2345;
    // arunjay.eId = 4;
    // cout<<arunjay.salary<<endl;
    // cout<<arunjay.eId<<endl;

    // unions
    // union money m1;    use only one value at one time nahi to garbage value dene lgega aur jo new likhe hai uspar shi value dega 
    // m1.rice = 34;
    // m1.car = 'c';
    // m1.pounds = 345.67;
    // cout<<m1.pounds<<endl;

    // ********* Enums in c++ *********
    enum meal{breakfast, lunch, dinner};
    // cout<<breakfast<<endl;
    // cout<<lunch<<endl;
    // cout<<dinner<<endl;
    // meal m1 = breakfast;
    // cout<<m1<<endl;
    // meal m1 = lunch;
    // cout<<m1<<endl;
    meal m1 = dinner;
    cout<<m1<<endl;


    return 0;
}   