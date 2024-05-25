#include<iostream>
#include<fstream>
using namespace std;

/*
The useful classes for working with files in c++ are :
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase

In order to work with files in c++, you will have to open it.primarily, there are 2 ways to open a files 
1. using the constructor 
2. using the member function open() of the class
*/
int main(){

    // opening files using constructor and writing it 
    string st = "harry bhai";
    ofstream out("sample60.txt");// Write operation
    out<<st;

    // opening file using constructor and reading it
    string st2;
    ifstream in("sample60b.txt");
    // in>>st2;
    getline(in, st2);// for reading all line or words
    cout<<st2;
    return 0;
}