#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4};
    int n=sizeof(arr)/sizeof(int);
    for (int i=0;i<n/2;i++){
        swap(arr[i],arr[n-i-1]);
    }
    for(const int x : arr){
        cout << x << " ";
    }
    cout<<'\n';
    return 0;
}