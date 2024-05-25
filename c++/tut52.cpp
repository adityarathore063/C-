#include<iostream>
using namespace std;

class shopItem{
    int id;
    float price;
    public:
        void setdata(int a, float b){
            id = a;
            price = b;
        }
        void getdata(){
            cout<<"Id of this item is "<<id<<endl;
            cout<<"price of this item is "<<price<<endl;
        }
};

int main(){

    int size = 3;
    // general store item
    // veggies item
    // hardware item
    shopItem *ptr = new shopItem [size];
    shopItem *tempptr = ptr;
    int p;
    float q;
    for( int i = 0; i<size; i++){
        cout<<"Enter the Id and Price of the item "<<i + 1<<endl;
        cin>>p>>q;
        ptr->setdata(p, q);
        ptr++;
    }

    // here we are using tempptr because ptr jo hai first loop ke baad last variable ka address store kar rha hai aur uske baad
    // wo 1st variable pr wapas nhi ayega  
    for(int i = 0; i < size; i++){
        cout<<"Item Number: "<<i + 1<<endl;
        tempptr->getdata();
        tempptr++;
    }

    return 0;
}