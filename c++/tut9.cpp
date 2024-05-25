#include<iostream>
using namespace std;

int main(){
    //  *******  Selection control structure: If else statements ******
    int age;
    cout<<"Tell me your age "<<endl;
    cin>>age;

    // if((age>0) && (age<18)){
    //     cout<<"You cannot come to my party "<<endl;
    // }
    // else if(age==18){
    //     cout<<"You are a kid and you will get a kid pass to the party "<<endl;
    // }
    // else if(age<1){
    //     cout<<"You are not yet born "<<endl;
    // }
    // else{
    //     cout<<"You can come to the party"<<endl;
    // }

        //  *******  Selection control structure: Switch case  statements ******
        switch (age)
        {
        case 18:
           cout<<"You are 18 "<<endl; 
            break;
        case 22:
          cout<<"You are 22 "<<endl;
           break;
        case 45:
          cout<<"You are 45 "<<endl;
          break;
        default:
          cout<<"No special cases "<<endl;
            break;
        }


    return 0;
}