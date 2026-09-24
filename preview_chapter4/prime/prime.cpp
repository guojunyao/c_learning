#include <iostream>
using namespace std;

int main()
{
    int num,i,sign=1;
    cin>>num;
    if (num==1)
        sign=0;
    for (i=2;i<num;++i) {
        if (num%i==0) {
            sign=0;
            break;
        }
    }
    if (sign==0)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;

}