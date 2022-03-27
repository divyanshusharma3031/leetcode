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
    //Function to sort an array using quick sort algorithm.
   int partition (int arr[], int lo, int hi)
{
   // Your code here
   int i=lo;
    int j=hi;
    int pivot=arr[lo];
    while(i<j)
    {
        do
        {
            /* code */
            i++;
        } while (arr[i]<=pivot);
        do
        {
            /* code */
            j--;
        } while (arr[j]>pivot);
        if(i<j)
        {
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[lo],arr[j]);
    return j;
}
void Qwicksort(int arr[],int lo,int hi)
{
     if(lo<hi)
    {
        int j=partition(arr,lo,hi);

        Qwicksort(arr,lo,j);

        Qwicksort(arr,j+1,hi);

    }
}
void quickSort(int arr[], int lo, int hi)
{
    // code here
    arr[hi+1]=INT_MAX;
    Qwicksort(arr,lo,hi+1);
}
};


// { Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      Solution ob;
    ob.quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}  // } Driver Code Ends