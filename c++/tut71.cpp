#include<iostream>
#include<vector>
using namespace std;

template< class T>
void display(vector<T> &v){
    cout<<"Displaying this vector "<<endl;
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
        // cout<<v.at(i)<<" ";// kaha pr kon sa element hai dekh sakte hai
    }
    cout<<endl;
}
int main(){

    // Zero length vector
    vector<int> vec1;
    // int element, size;
    // cout<<"Enter the size of your vector "<<endl;
    // cin>>size;
    // for(int i = 0; i < size; i++){
    //     cout<<"Enter the element for vec1 for index  "<<i<<endl;
    //     cin>>element;
    //     vec1.push_back(element);

    // }
    // // vec1.pop_back(); // remove the last element
    // display(vec1);
    // vector<int> :: iterator iter = vec1.begin();
    // // vec1.insert(iter, 678); // inseert a element instead of  first element and first element becomes second element 
    // // vec1.insert(iter+1, 67); // insert a element instead of second element amd second element becomes third element
    // // vec1.insert(iter,10,56);// insert 10 copy of 56 before first element 
    // // display(vec1);

    // Ways to create a vector
    vector<char> vec2(4); // 4- element character vector
    vector<char> vec3(vec2); // 4- element character vector from vec2
    vector<int> v(6, 3); // 6- element vector of 3s(3,3,3,3,3,3)
    // display(vec1);
    // vec2.push_back('c');
    // display(vec2);
    // display(vec3);
    display(v);
    cout<<v.size(); // gives the size of vector 




    return 0;
}