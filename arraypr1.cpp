#include<iostream>
using namespace std;
 int peakElement(int arr[], int n)
    {
       int mx,i,j;
       mx=arr[0];
    
       for(i=0;i<n;i++)
	   {
       	    if(arr[i]>mx){
			   mx=arr[i];
			   return i;
			}
       			
		}
    		
		
       
    }
int main()
{
    int arr[]={11,4,344,700,7878},g;
    g=peakElement(arr,5);
    cout<<g;
    return 0;
}
