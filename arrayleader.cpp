#include <iostream>
using namespace std;

void leader(int arr[],int n,int i){
    if(i==n-1){
        return;
    }
    for(int x=i;x<n;x++){
        if(arr[x]<arr[i]){
            cout<<arr[i]<<" ";
        }
    }
    leader(arr,n,i+1);
}

int main(){
    int arr[]={1,2,4,3,20,21,21,44};
    int n=sizeof(arr)/sizeof(int);
    leader(arr,n);
    return 0;
}