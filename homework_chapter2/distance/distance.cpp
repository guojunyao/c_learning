#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    double delta_x = x1-x2;
    double delta_y = y1-y2;
    double distance = sqrt(delta_x*delta_x+delta_y*delta_y);
    cout<<distance<<endl;
}