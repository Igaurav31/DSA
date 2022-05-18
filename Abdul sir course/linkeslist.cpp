#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node
{
 int data;
 struct Node *next;
}*first=NULL;
void create(int A[],int n)
{
 int i;
 struct Node *t,*last;
 first=(struct Node *)malloc(sizeof(struct Node));
 first->data=A[0];
 first->next=NULL;
 last=first;
 
 for(i=1;i<n;i++)
 {
 t=(struct Node*)malloc(sizeof(struct Node));
 t->data=A[i];
 t->next=NULL;
 last->next=t;
 last=t;
 }
}
void Display(struct Node *p)
{
 while(p!=NULL)
 {
 printf("%d ",p->data);
 p=p->next;
 }
}
int maxx(struct Node *p)
{
    int tempmax = INT32_MIN;
    while (p)
    {
        if(p->data>tempmax)
            tempmax= p->data;
        p=p->next;
    }
    return tempmax;
}

// int rmax(struct Node *p)
// {
//     int maxno= INT32_MIN;

//     }
//     return maxno;

// }
int search(struct Node *p, int key){
    Node *t =NULL;
    while(p!=NULL)
    {
        
        if(key==p->data)
            return 1;
            t->next=p->next;
            p->next=first;
            first=p;
        t=p;
        p= p->next;
    }
}

int main()
{
    int a[] = {1,3,4,5};
    create(a,4);
    Display(first);
//    cout<<"\n"<<maxx(first);
   cout<<"\n"<<search(first,4);
   Display(first);
    return 0;
}