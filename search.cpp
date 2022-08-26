#include <iostream>
using namespace std;

int binarysearch(int arr[],int n,int x){
    int start = 0;
    int end = n-1;
    
    while (start<=end){
        int mid=(start+end)/2;
        if(arr[mid]>x){
            end = mid-1;
        }
        else if(arr[mid]<x){
            start = mid+1;
        }
        else if(arr[mid]==x){
            return mid;
        }
    }
}

int main(){
    int arr[]={10,20,30,40,50,99,99,99,99,111};
    cout<<binarysearch(arr,10,99);
    return 0;
}