#include <bits/stdc++.h>
using namespace std;
void merge(int[], int, int, int,int[]);
void mergesort(int array[], int low, int high,int sortarray[])
{
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    mergesort(array, low, mid,sortarray);
    mergesort(array, mid + 1, high,sortarray);
    merge(array, low, mid, high,sortarray);
}
void merge(int array[], int low, int mid, int high,int sortarray[])
{
    int i = low;
    int j = mid + 1;
    int c=low;
    while (i <= mid && j <= high)
    {
        if (array[i] <=array[j])
        {
            sortarray[c]=array[i];
            i++;
            c++;
        }
        else
        {
           sortarray[c]=array[j];
            j++;
            c++;
        }
        while (i <= mid)
        {
           sortarray[c]=array[i];
            i++;
            c++;
        }
        while (j <= high)
        {
            sortarray[c]=array[j];
            j++;
            c++;
        }
    }
}
int main()
{
    int array[] = {5, 6, 2, 1, 89,79,4, 9};
    int low = 0;
    int high = (sizeof(array) / sizeof(int)) ;
    int si=high+1;
    int sortarray[si];
    mergesort(array, low, high,sortarray);
    for(auto it:sortarray) {
        cout<<it<<" ";
    }
    return 0;
}