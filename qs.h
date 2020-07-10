#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int part(int arr[], int low, int high)
{
    int j;
    int piv = arr[high];
    int i = (low-1);

    for(j=low;j<high;j++)
    {
        if(arr[j]<=piv)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1], &arr[high]);
    return(i+1);
}

void qs(int arr[], int low, int high)
{
    if(low<high)
    {
        int pi = part(arr, low, high);
        qs(arr, low, pi-1);
        qs(arr, pi+1, high);
    }
}

void display(int arr[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<""<<endl;
    }
}