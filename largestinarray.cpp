#include <iostream>
using namespace std;

int fun(int arr[],int i,int n){
    if (i==n){
        return 0;
    }
    if (arr[i]>fun(arr,i+1,n)){
        return arr[i];
    }
    else return fun(arr,i+1,n);
}

int main(){
    int arr[]={10};
    cout << fun(arr,0,sizeof(arr)/sizeof(int))<<endl;
    return 0;
}