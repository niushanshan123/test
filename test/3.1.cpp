#include <iostream>
#include <climits>

int main()
{
    using namespace std;
    int n_int=INT_MAX;
    short n_short=SHRT_MAX;
    long n_long=LONG_MAX;
    long long n_long_long=LLONG_MAX; 
    cout<<"Maximum values:"<<endl;
    cout<<"int="<<n_int<<endl;
    cout<<"short="<<n_short<<endl;
    cout<<"long="<<n_long<<endl;
    cout<<"long long="<<n_long_long<<endl;
    cout<<"int is "<<sizeof(int)<<" bytes"<<endl;
cout<<"short is "<<sizeof n_short<<" bytes"<<endl;
cout<<"long is "<<sizeof(long)<<" bytes"<<endl;
cout<<"long long is "<<sizeof(long long)<<" bytes"<<endl;

  return 0;
}