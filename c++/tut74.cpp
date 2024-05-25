#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){

    // Function objects (Functor): Function wrapped in a class so that it available like an object
    int arr[] = {1,36,5,13,56,7};
    sort(arr, arr+6); // sort by default  in ascending order
    sort(arr, arr+6, greater<int>()); // here we pass a functional object then sorted in descending order
    for(int i = 0; i < 6; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}