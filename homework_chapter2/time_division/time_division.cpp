#include <iostream>
using namespace std;

int main()
{
    int time;
    cin>>time;
    int hour=time/3600;
    time %= 3600;
    cout<<hour<<":"<<time/60<<":"<<time%60<<endl;
    return 0;
}