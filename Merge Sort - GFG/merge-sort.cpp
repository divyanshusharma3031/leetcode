// { Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


 // } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l, int mid, int r)
    {
         // Your code here
         int r1=mid-l+1;
         int r2=r-mid;
         int arr1[r1];
         int arr2[r2];
         int x=0;
         for(int i=l;i<=mid;i++)
         {
             arr1[x]=arr[i];
             x++;
         }
         x=0;
         for(int i=mid+1;i<=r;i++)
         {
             arr2[x]=arr[i];
             x++;
         }
         int arr3[r-l+1];
         int i=0;
         int j=0;
         int k=0;
         while(i<r1 && j<r2)
         {
             if(arr1[i]<arr2[j])
             {
                 arr3[k]=arr1[i];
                 k++;
                 i++;
             }
             else
             {
                 arr3[k]=arr2[j];
                 k++;
                 j++;
             }
         }
         while(i<r1)
         {
             arr3[k]=arr1[i];
             k++;
             i++;
         }
         while(j<r2)
         {
             arr3[k]=arr2[j];
             k++;
             j++;
         }
         k=0;
         for(i=l;i<=r;i++)
         {
             arr[i]=arr3[k];
             k++;
         }
    }
    public:
    void mergesort(int arr[],int l,int r)
    {
        if(l<r)
        {
        int mid=(l+r)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);
        merge(arr,l,mid,r);
        }
    }
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        mergesort(arr,l,r);
    }
};

// { Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}  // } Driver Code Ends