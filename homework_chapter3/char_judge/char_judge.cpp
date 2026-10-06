#include <iostream>
using namespace std;

int main()
{
    char a;
    cin>>a;
    if (65<=a&&a<=90||97<=a&&a<+122) {
        switch (a) {
            case 65:
            case 69:
            case 73:
            case 79:
            case 85:
            case 65+32:
            case 69+32:
            case 73+32:
            case 79+32:
            case 85+32:cout<<"是元音"<<endl;break;
            default:cout<<"是辅音"<<endl;break;
        }
    }
    else cout<<"不是字母"<<endl;
    return 0;
}