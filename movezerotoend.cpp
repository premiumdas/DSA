#include <iostream>
using namespace std;

int* zero(int arr[],int n){
    int count=0;
    for (int i=0;i<n;i++){
        if (arr[i]!=0){
          swap(arr[i],arr[count]);
          count++;  
        }
        
    }
    
    return arr;
}

int main(){
    int arr[7]={0,0,0,0,20,3,0};
    int *count,n = sizeof(arr)/sizeof(int);
    zero(arr,n);
    for(const int i : arr){
        cout<<i<<" ";
    }
    cout<<'\n';
    return 0;
}