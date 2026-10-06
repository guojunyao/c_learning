#include <iostream>
using namespace std;

int main()
{
    double x;
    cin>>x;
    switch ((x<1)+(x<10)) {
        case 0:cout<<3*x-11<<endl;break;
        case 1:cout<<2*x-1;break;
        case 2:cout<<x<<endl;break;
    }
    return 0;
}