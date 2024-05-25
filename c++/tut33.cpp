#include <iostream>
using namespace std;

class Bankdeposits
{
    int principal;
    int years;
    float interestrate;
    float returnvalue;

public:
    Bankdeposits() {}
    Bankdeposits(int p, int y, float r); // r can be value like 0.04
    Bankdeposits(int p, int y, int r);   // r can be value like 14
    void show();
};

Bankdeposits ::Bankdeposits(int p, int y, float r)
{
    principal = p;
    years = y;
    interestrate = r;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}

Bankdeposits ::Bankdeposits(int p, int y, int r)
{
    principal = p;
    years = y;
    interestrate = float(r) / 100;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}

void Bankdeposits :: show(){
    cout<<"principal amount was "<<principal<<endl;
    cout<<"Return value after "<<years<<" years is "<<returnvalue<<endl;
}
int main()
{
    Bankdeposits bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    cout<<"Enter the value of p, y and r "<<endl;
    cin>>p>>y>>r;

    bd1 = Bankdeposits(p, y, r);
    bd1.show();

    cout<<"Enter the value of p, y and R "<<endl;
    cin>>p>>y>>R;

    bd2 = Bankdeposits(p, y, R);
    bd2.show();


    return 0;
}