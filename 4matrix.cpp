#include<iostream>
using namespace std;
class diagonal
{
    private:
    int n;
    int *a;
    public:
    diagonal(){
        n=2;
        a= new int[2];
    }
    diagonal(int n)
    {
        this->n=n;
        a=new int[n];
    }
    ~diagonal()
    {
        delete []a;
    }
    void set(int x,int i, int j);
    void get(int i, int j);
    void dis();
};

void diagonal :: set(int x, int i, int j)
{
    if (i==j)
        a[i-1]=x;

}

int main()
{
    return 0;
}