#include <iostream>
using namespace std;

int* left(int arr[],int n, int d){
    if(d==0){
        return arr;
    }
    for(int i=0;i<n-1;i++){
        swap(arr[i],arr[i+1]);

    }
    left(arr,n,d-1);
    return arr;
}

int main(){
    int arr[]={10,5,30,15};
    int n=sizeof(arr)/sizeof(int);
    left(arr,n,3);
    for(const int i : arr){
        cout<<i<<" ";
    }
    cout<<'\n';
    return 0;
}