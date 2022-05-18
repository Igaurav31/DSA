#include<iostream>
using namespace std;
class array{
    private:
    int *a;
    int size;
    int lenght;
    public:
    array(int sz)
    {
        size=sz;
        lenght=0;
        a=new int[size];
    }
    ~array()
    {
        delete a[];
    }
    void append(int x);
    void insert(int x, int index);
    int Delete(int index);
    int LinearSearch(int key);
    int binarysearch(int key);
};



void array :: append(int x)
{
    if(lenght<size)
        a[lenght++]=x;
    lenght++;
}
void array :: insert(int x, int index)
{
    if(index>=0&&index<size)
        for(int i= lenght;i>index;i--)
        {
            a[i]=a[i--];
        
        }
        a[index]=x;
        lenght++;
}
int array::Delete(int index)
{
 int x=0;
 int i;
 
 if(index>=0 && index<length)
 {
 x=A[index];
 for(i=index;i<length-1;i++)
 A[i]=A[i+1];
 length--;
 return x;
 }
 
 return 0;
}
int array::LinearSearch(int key)
{
 int i;
 for(i=0;i<length;i++)
 {
 if(key==A[i])
 {
 swap(&A[i],&A[0]);
 return i;
 }
 }
 return -1;
}
int array :: binarysearch(int key)
{
    int l,h,mid;
    l=0;
    h=lenght-1;
    mid= (l+h)/2;
    while(l<=h){
    if(key==a[mid])
        return 1;
    else if(mid>key)
        l=mid+1;
    else
        h=mid-1;
    }
}
int main()
{
    return 0;
}