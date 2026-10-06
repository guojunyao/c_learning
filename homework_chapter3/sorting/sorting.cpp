#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    switch ((a<b)+(b<c)+(c<d)) {
        case 0:cout<<d<<" "<<c<<" "<<b<<" "<<a<<" "<<endl;break;
        case 1:
            if (a<b) {
                switch ((a<d)+(a<c)) {
                    case 0:cout<<d<<" "<<c<<" "<<a<<" "<<b<<" "<<endl;break;
                    case 1:cout<<d<<" "<<a<<" "<<c<<" "<<b<<" "<<endl;break;
                    case 2:cout<<a<<" "<<d<<" "<<c<<" "<<b<<" "<<endl;break;
                }
                break;
            }
            else if (b<c) {
                switch ((d<b)+(c<a)) {
                    case 0:
                        if (a<d) {cout<<b<<" "<<a<<" "<<d<<" "<<c<<" "<<endl;break;}
                        else {cout<<b<<" "<<d<<" "<<a<<" "<<c<<" "<<endl;break;}
                    case 1:
                        if (d<b) {cout<<d<<" "<<b<<" "<<a<<" "<<c<<" "<<endl;break;}
                        else {cout<<b<<" "<<d<<" "<<c<<" "<<a<<" "<<endl;break;}
                    case 2:
                        cout<<d<<" "<<b<<" "<<c<<" "<<a<<" "<<endl;break;
                }
                break;
            }
            else {
                switch ((b<d)+(a<d)) {
                    case 0:cout<<c<<" "<<d<<" "<<b<<" "<<a<<" "<<endl;break;
                    case 1:cout<<c<<" "<<b<<" "<<d<<" "<<a<<" "<<endl;break;
                    case 2:cout<<c<<" "<<b<<" "<<a<<" "<<d<<" "<<endl;break;
                }
                break;
            }
        case 2:
            if (a>b) {
                switch ((c<a)+(d<a)) {
                    case 0:cout<<b<<" "<<a<<" "<<c<<" "<<d<<" "<<endl;break;
                    case 1:cout<<b<<" "<<c<<" "<<a<<" "<<d<<" "<<endl;break;
                    case 2:cout<<b<<" "<<c<<" "<<d<<" "<<a<<" "<<endl;break;
                }
                break;
            }
            else if (b>c) {
                switch ((a<c)+(b<d)) {
                    case 0:
                        if (a<d) {cout<<c<<" "<<a<<" "<<d<<" "<<b<<" "<<endl;break;}
                        else {cout<<c<<" "<<d<<" "<<a<<" "<<b<<" "<<endl;break;}
                    case 1:
                        if (d<b) {cout<<a<<" "<<c<<" "<<d<<" "<<b<<" "<<endl;break;}
                        else {cout<<c<<" "<<a<<" "<<b<<" "<<d<<" "<<endl;break;}
                    case 2:
                        cout<<a<<" "<<c<<" "<<b<<" "<<d<<" "<<endl;break;
                }
                break;
                }
            else {
                switch ((d<a)+(d<b)) {
                    case 0:cout<<a<<" "<<b<<" "<<d<<" "<<c<<" "<<endl;break;
                    case 1:cout<<a<<" "<<d<<" "<<b<<" "<<c<<" "<<endl;break;
                    case 2:cout<<d<<" "<<a<<" "<<b<<" "<<c<<" "<<endl;break;
                }
                break;
            }
        case 3:cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<endl;break;
    }
    return 0;
}