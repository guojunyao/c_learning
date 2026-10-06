#include <iostream>
using namespace std;

int main()
{
    int a,b,c,x,y,z;
    cin>>a>>b>>c;
    switch ((a<b)+(b<c)) {
        case 0:x=a;y=b;z=c;break;
        case 1:
            if (b<a) {
                if (a<c) {x=c;y=a;z=b;}
                else {x=a;y=b;z=c;}
            }
            else {x=b;y=a;z=c;}
            break;
        case 2:x=c;y=a;z=b;break;
    }
    if (x>=y+z) cout<<"不能构成三角形"<<endl;
    else if (x*x==y*y+z*z) cout<<"是三角形且为直角三角形"<<endl;
    else cout<<"是三角形但不是直角三角形"<<endl;
    return 0;
}