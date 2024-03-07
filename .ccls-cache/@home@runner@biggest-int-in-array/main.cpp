#include <iostream>
using namespace std;
int biggestint(int arr[]);
int biggestint(int arr[],int n){
  int x=arr[0];
  for(int i=0;i<n;i++){
    if(arr[i]>x){
      x=arr[i];
    }
  }
  return x;
}

int main() {
  int a[6]={1,2,3,5,4,2};
  cout<<biggestint(a,6)<<endl;
  return 0;
}