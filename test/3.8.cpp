#include <iostream>

int main()
{
    using namespace std;

    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tub=10.0/3.0;
    float tub2=10/3;
    float tub3=1.0e6;
    double tub4=10.0/3.0;
    cout<<"tub="<<tub<<endl;
    cout<<"tub2="<<tub2<<endl;
    cout<<"new number="<<tub*tub3<<endl;
    cout<<"new number2="<<tub4*tub3<<endl;
    return 0;
}