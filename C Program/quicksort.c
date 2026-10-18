#include<stdio.h>

int partition(int arr[], int s, int e)
{   
    
    int pivot =arr[s];
    int count =0;
    for(int i=s+1; i<=e; i++)
    {
        if(arr[i]<=pivot){
        count++;
        }
    }

    //position of pivot element
    int pivotindex = s+count;
    int temp=arr[pivotindex];
    arr[pivotindex]= arr[s];
    arr[s]=temp;

    // left part
    int i=s, j=e;
    while(i<pivotindex && j>pivotindex)
    {
        while(arr[i]<=pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            j--;

        }

        if(i<pivotindex && j> pivotindex)
        {
            int tem=arr[i];
            arr[i]=arr[j];
            arr[j]= tem;
            i++;
            j--;
        }
    }
    
    return pivotindex ;

}

void quicksort(int arr[], int s, int e)
{
    if(s>=e){
        return ;

    }

    int p = partition(arr, s, e);

    quicksort(arr, s, p-1);
    quicksort(arr, p+1, e);
}

int main(){

    int arr[7]={29, 5, 28, 78, 15, 25, 19};
    int i, n=7;

    quicksort(arr, 0, n-1);

    for(i=0; i<n; i++)
    {
     printf("%d\n", arr[i]);  
    }

    return 0;
}