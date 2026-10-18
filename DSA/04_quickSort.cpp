#include<iostream>
using namespace std;

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
    swap(arr[s], arr[pivotindex]);

    // left part and right part handle karna hai
    int i=s, j=e;
    while(i<pivotindex && j>pivotindex)
    {
        while(arr[i]<=pivot)         // duplecate element ke kia equal to lagaya hai
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            j--;

        }

        if(i<pivotindex && j> pivotindex)
        {
            swap(arr[i++], arr[j--]);
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
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
