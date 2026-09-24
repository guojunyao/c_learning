#include <iostream>
#include <string>
using namespace std;

int main()
{
    string sentence;
    getline(cin,sentence);
    int a=0,b=0,c=0,d=0,e=0,i=1;
    for (int x: sentence) {
        if (x==65||x==69||x==73||x==79||x==85||x==97||x==101||x==105||x==111||x==117)
            ++a;
        else if ((65<=x && x<=90) || (97<=x && x<=122))
            ++b;
        else if (x==32)
            ++c;
        else if (48<=x && x<=57)
            ++d;
        else if (i!=(int)sentence.size())
            ++e;
        else
            break;
        ++i;
    }
    cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e<<endl;
}