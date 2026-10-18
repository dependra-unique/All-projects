#include<iostream>
using namespace std;


// //counting function recursion
// void counting(int n)
// {
//     if(n<=0)
//     {
//         return;

//     }
//      counting(n-1);
//     cout<<n<<" ";

   
// }


// //factorial function recursion
// int fact(int n)
// {
//     if(n==1){
//         return 1;
//     }

//     return n*fact(n-1);
// }

// int main()
// {
//     int n;
//     cout<<"Enter the number "<<endl;
//     cin>>n;
//     // counting(n);            //counting function calling


//     cout<< fact(n)<<" ";                    //factorial function call

// }


#include<iostream>
using namespace std;

//fibonacci function using recursion
int fibonacci(int n)
{
   if(n==0||n==1)
   return n;

    return fibonacci(n-1)+ fibonacci(n-2);
}


int main()
{
    int n;
    // cout<<"Enter the number";
    // cin>>n;
    // int fibonacci_result = fibonacci(5);
    cout<< fibonacci(5) <<endl;

}