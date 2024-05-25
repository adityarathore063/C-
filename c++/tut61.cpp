#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // connecting our file with hout stream
    ofstream hout("sample60.txt");
    // creating a name string and filling it with the string entered by the user
    cout<<"Enter Your name "<<endl;
    string name;
    cin>>name;

    // Writing a string to the file 
    hout<<name;
    hout.close();

    ifstream hin("sample60.txt");
    string content;
    hin>>content;
    cout<<content;
    return 0;
}