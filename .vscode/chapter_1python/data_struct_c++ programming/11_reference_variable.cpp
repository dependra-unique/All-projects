#include<iostream>
using namespace std;

int main(){
    int a=2;
    int &b = a;

    cout<<a<<endl;
    cout <<b<<endl;
    a++;
    cout<<&a<<endl;;
    cout <<&b<<endl;;

}