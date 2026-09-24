#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    double delta=b*b-4*a*c;
    if (delta>0)
        cout<<(-sqrt(delta)-b)/2/a<<" "<<(sqrt(delta)-b)/2/a<<endl;
    else if (delta==0)
        cout<<(double(-b))/2/a<<endl;
    else
        cout<<"NO"<<endl;
}