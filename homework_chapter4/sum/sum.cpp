#include <iostream>
using namespace std;

int main()
{
    int i,j,a,sum=0;
    for (i=1;i<=8;i++) {
        a=1;
        for (j=1;j<=i;j++) a*=j;
        sum+=a;
    }
    cout<<sum;
    return 0;
}