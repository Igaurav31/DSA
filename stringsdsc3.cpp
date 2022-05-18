// reversing a string
#include<iostream>
using namespace std;
int main()
{
    char s[20]="python";
    char r;
    for(int i=0;s[i]!="\0";i++)
    {
       for(int j=0;j<i;j--)
        s[i]=r[j];
    }
    cout<<r;
    return 0;
}