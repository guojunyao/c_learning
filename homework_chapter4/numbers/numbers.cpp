#include <iostream>
using namespace std;

int main()
{
    int a,b,c,count=0;
    for (a=1;a<=9;a++) {
        for (b=0;b<=9;b++) {
            if (b==a) continue;
            for (c=0;c<=9;c++) {
                if (c==a||c==b) continue;
                count++;
            }
        }
    }
    cout<<count;
}