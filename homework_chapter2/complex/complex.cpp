#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    double real=a*c-b*d;
    double imaginary=a*d+b*c;
    double modulus=sqrt(real*real+imaginary*imaginary);
    cout<<modulus;
    return 0;
}