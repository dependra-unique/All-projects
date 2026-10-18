#include<iostream>
using namespace std;
int main(){

    // int i, j;
    // for(i=1; i<=5; i++){
    //     for(j=1; j<=5; j++){
    //         cout<< "*";

    //     }
    //     cout << endl;
    // }

    // int i, j;
    // for(i=0; i<3; i++){
    //     for(j=1; j<4; j++){
    //         cout << (j+3*i);
            
    //         }
    //         cout <<endl;
    //     }

    // int i, j, a=1;
    // for(i=0; i<4; i++){
    //     for(j=a; j<=i+a; j++){
            
    //             cout <<j;
            
    //     }
    //     cout <<endl;
    //     a=j;
    // }


    // int i,j;
    // for(i=1; i<=4; i++){
    //     int value =i;
    //     for(j=1; j<=i; j++){
    //          cout <<value;
    //          value = value+1;
    //     }
    //     cout <<endl;

    // }
    

    // int i, j;
    // for(i=1; i<=4; i++){
    //     for(j=1; j<=i; j++){
    //         cout <<i-j+1;
    //     }
    //     cout<<"\n";
    // }
    
    
    

    //abc pattern
    int i,j;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            char ch = 'A'+i-j;
            cout << ch;  
        }
        cout << endl;
    }
}