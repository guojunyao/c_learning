#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double e=0;
    int i,j;
    double a;
    i=0;
    for (i=0;i<=500;++i) {
        a=1;
        j=1;
        for (j=1;j<=i;++j)
            a*=j;
        e+=1/a;
    }
    cout<<e<<endl;
}