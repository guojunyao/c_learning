#include <iostream>
using namespace std;

double convert(double);

int main()
{
    double a,b;
    cin>>a;
    b=convert(a);
    cout<<b;
    return 0;
}

double convert(double x) {return 2.54*x;}