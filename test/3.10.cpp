#include <iostream>

int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float hats,heads;
    //hats=1e7;
    //heads=9.0;
    cout<<"enter a number:";
    cin>>hats;
    cout<<"enter a number:";
    cin>>heads;
    cout<<"hats="<<hats<<"  heads="<<heads<<endl;
    cout<<"hats+heads="<<hats/heads<<endl;
}