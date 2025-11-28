#include <iostream>

int main()
{
    using namespace std;
    int yams[]{7,8,6};
    //yams[0]=7;
    //yams[1]=8;
    //yams[2]=6;
    
    int yamcosts[3]={20,30,5};
    cout<<"Total yams=";
    cout<<yams[0]+yams[2]+yams[1]<<endl;
    
    int total=yams[0]*yamcosts[0]+yams[1]*yamcosts[1]+yams[2]*yamcosts[2];
    cout<<"real total yams are "<<total<<"."<<endl;
cout<<"The size of array are "<<sizeof (yams)<<".\n";
    return 0;
}