#include <iostream>
using namespace std;

int main()
{
    int elec;
    cin>>elec;
    int cost=elec*6;
    int a=cost/10;
    int b=(cost%10)/5;
    int c=(cost%10)%5;
    cout<<double(cost)/10<<" "<<a<<" "<<b<<" "<<c<<endl;
    return 0;
}