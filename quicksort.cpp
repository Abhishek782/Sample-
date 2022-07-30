// 2020BTEIT00061
// ABHISHEK DEOKAR - QUICKSORT 

#include<iostream>
using namespace std;

void swap_nums(int &x, int &y)
{
    int temp = x;
    x=y;
    y= temp;
}

void quickSort(int arr[],int low,int high)
{
    if(low>=high)
    {
        return;
    }

    int s = low;
    int e= high;
    int mid = s+(e-s)/2;
    int pivot = arr[mid];
    while(s<=e)
    {
        while(arr[s]<pivot)
        {
            s++;
        }
        while(arr[e]>pivot)
        {
            e--;
        }
        if(s<=e)
        {
            swap_nums(arr[s],arr[e]);
            s++;
            e--;
        }
    }
    quickSort(arr,low,e);
    quickSort(arr,s,high);
}

void print(int arr[],int n)
{
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i]= n-i;
    }
    quickSort(arr,0,n-1);
    print(arr,n);    
    return 0;
}