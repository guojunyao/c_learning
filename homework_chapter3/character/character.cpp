#include <iostream>
using namespace std;

int main()
{
    char a;
    cin>>a;
    if ((65<=a)&&(a<=90)) cout<<char(a+32)<<endl;
    else if ((97<=a)&&(a<=122)) cout<<char(a-32)<<endl;
    else cout<<"NO"<<endl;
    return 0;
}