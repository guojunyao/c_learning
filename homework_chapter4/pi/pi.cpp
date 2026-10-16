#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int i=1;
    double a=1,sum=0;
    while (fabs(a)>=0.000001) {
        sum+=a;
        i++;
        a=double((i%2*2-1))/(2*i-1);
    }
    cout<<4*sum;
}