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
    void merge(int arr[], int lo, int mid, int hi)
    {
             int s1=mid-lo+1;
    int s2=hi-mid;
    int arr1[s1];
    int arr2[s2];
    int x=0;
    for(int i=lo;i<=mid;i++)
    {
        arr1[x]=arr[i];
        x++;
    }
    x=0;
    for(int i=mid+1;i<=hi;i++)
    {
        arr2[x]=arr[i];
        x++;
    }

    int arr3[hi-lo+1];

    int i=0;

    int j=0;

    x=0;
    while(i<s1 && j<s2)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[x]=arr1[i];
            i++;
            x++;
        }
        else
        {
            arr3[x]=arr2[j];
            j++;
            x++;
        }
    }

    while(i<s1)
    {
        arr3[x]=arr1[i];
        i++;
        x++;
    }

    while(j<s2)
    {
        arr3[x]=arr2[j];
        j++;
        x++;
    }

    i=lo;
    x=0;
    while(i<=hi)
    {
        arr[i]=arr3[x];
        i++;
        x++;
    }
    }
    public:
    void mergeSort(int arr[], int lo, int hi)
    {
        //code here
        if(lo<hi)
    {
        int mid=(lo+hi)/2;
        mergeSort(arr,lo,mid);
        mergeSort(arr,mid+1,hi);
        merge(arr,lo,mid,hi);
    }
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