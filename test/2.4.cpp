#include <iostream>
#include <cmath>
//double sqrt(double);
int main()
{
    using namespace std;
    double  area;
    cout <<"enter the floor area,in square feet,of your home"<<endl;//
    cin>>area;
    sqrt(area);
    double side;
    side=sqrt(area);
    cout<<"that's the equivalent of a square "<<side<<" feet to the side."<<endl;
    cout<<"how fascination"<<endl;

    return 0;
}