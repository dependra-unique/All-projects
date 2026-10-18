#include <iostream>
using namespace std;

int main() {
  

  int arr[3][5] = {{1, 0, 3, 0, 0},
                 {0, 8, 7, 0, 0}, 
                 {8, 0, 0, 0, 2}};

  int count = 0;
  for(int i = 0; i<3; i++){
    for(int j =0; j<5; j++){
      if(arr[i][j] != 0){
        count++;
      }
    }
  }    

  // cout<<count;

  int p, q =0;
  int brr[3][count];
  for(int i = 0; i<3; i++){
    for(int j =0; j<5; j++){
      if(arr[i][j] != 0){
        brr[p][q] = i;
        p++;
        brr[p][q] = j;
        p++;
        brr[p][q] = arr[i][j];
        p=0;
        q++;
      }
    
    }
  }          

  for(int i = 0; i<3; i++){
    for(int j = 0; j<count; j++){
      cout<<brr[i][j]<<" ";
    }
    cout<<endl;
  }


  return 0;
}