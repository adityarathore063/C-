#include<iostream>
#include<string>
#include<map>
using namespace std;


int main(){

    // Map is an associative array
    map<string, int> marks;
    marks["rohit"] = 68;
    marks["gaurav"] = 89;
    marks["aditya"] = 88;
    marks.insert({{"sohan", 56}, {"rohan", 34}});// inserting the element 
    map<string, int> :: iterator iter;
    for(iter = marks.begin(); iter!=marks.end(); iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    return 0;
}