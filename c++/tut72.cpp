#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst){
    list<int> :: iterator i;
    for(i = lst.begin(); i!= lst.end(); i++){
        cout<<*i<<" ";
    }
    cout<<endl;
}
int main(){

    list<int> list1;
    list1.push_back(6);
    list1.push_back(4);
    list1.push_back(5);
    list1.push_back(3);
    list1.push_back(34);

    // list<int> :: iterator iter;
    // iter = list1.begin();
    // cout<< *iter<<endl; // printing the first element 
    // iter++;
    // cout<<*iter<<endl; // printing the second element
    display(list1);
    // list1.remove(4); // remove 4 from list
    // sorting the list
    // list1.sort();
    // display(list1);

    list<int> list2(3); // Empty list of size 3
    // cout<<list2.size();
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 56;
    iter++;
    *iter = 89;
    iter++;
    // display(list2);
    list1.sort();
    list2.sort();
    list1.merge(list2);
    cout<<"List 1 after merging "<<endl;
    display(list1);
    list1.reverse();
    display(list1);


    return 0;
}