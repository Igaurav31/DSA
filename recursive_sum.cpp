#include<iostream>
using namespace std;
int son(int n){
    int sm= 0;
    for(int i=0;i<=n;i++)
    sm=sm+i;
    return sm;
}
int main()
{   int x;
    x= son(5);
    cout<<x;

    return 0;
}