#include <iostream>
using namespace std;

int main()
{
    double i,a=1,b=1,sum;
    for (i=1;i<=13;i++) {
        sum+=(a+b)/b;
        b=a+b;
        a=b-a;
    }
    cout<<int(sum);
}