#include<iostream>
using namespace std;

int main(){
    int a[] ={5, 8, 9, 6, 3, 12, 2};
    int n=7;

    for(int i=1; i<n; i++)
    {
        for(int j=0; j<n-i; j++)
        {
            if(a[j]>a[j+1])
            {
                int temp =a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
                //swap(a[j], a[j+1]);
            }
        }
    }

    for(int i =0; i<n; i++)
    {
        cout<< a[i]<<" ";

    }
    cout<<endl;

}