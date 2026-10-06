#include <iostream>
using namespace std;

int main()
{
    char sentence[200+1],prev=' ';
    int i,num=0;
    cin.getline(sentence,201);
    for (i=0;sentence[i]!='\0';++i) {
        if (prev==' '&&sentence[i]!=' ') ++num;
        prev=sentence[i];
    }
    cout<<num;
}