#include<iostream>
using namespace std;

int main(){
    int a[5]= {6, 8, 5, 3, 2};

    int n=5, j;
    for(int i=1; i<n; i++)
    {
        int temp =a[i];
        
        for(int j=i-1; j>=0; j--)
        {
            if(a[j]>temp)
            {
                a[j+1]=a[j];

            }
            
        }
        a[j+1]=temp;

    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";

    }

    
}


// #include<iostream>
// using namespace std;

// int main(){
//     int a[5]= {6, 8, 5, 3, 2};

//     int n=5, j;
//     for(int i=1; i<n; i++)
//     {
//         int temp =a[i];
//         j=i-1;
//         while(j>=0&&a[j]>temp){
//             a[j+1]=a[j];
//             j--;
//         }
//         a[j+1]=temp;

//     }
//     for(int i=0; i<n; i++){
//         cout<<a[i]<<" ";

//     }

// }