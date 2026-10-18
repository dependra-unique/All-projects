#include<iostream>
using namespace std;

void merge(int arr[], int s, int e)
{   
    int mid = (s+e)/2;
    int i=s, j=mid+1, k=s;
    int brr[10];
    while(i<=mid && j<=e) 
    {
        if(arr[i]< arr[j])
        {
            brr[k++]=arr[i++];
        }
        else{
            brr[k++]=arr[j++];

        }
        
    }
    if(i==mid+1){
        for(int p=j; p<=e; p++)
        {
            brr[k++]=arr[p];
        }
    }
    else{
        for(int p=i; p<=mid; p++)
        {
            brr[k++]=arr[p];
        }
    }

    for(int p=s; p<=e; p++)
    {
        arr[p]=brr[p];
    }

}


void merge_sort(int arr[], int s, int e)
{
   if(s>=e){
    return;
   }
   
    int mid = (s+e)/2;
    
    merge_sort(arr, s, mid);
    merge_sort(arr, mid+1, e);

    merge(arr, s, e);
   
    
}

int main()
{
    int arr[7] ={4, 5, 9, 2, 4, 9, 7};

    int n=7;
   
    merge_sort(arr, 0, n-1);
    

    for(int i=0; i<n; i++)
    {
      cout <<arr[i]<<" ";

    }
}

