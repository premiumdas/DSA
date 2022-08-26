#include <iostream>
using namespace std;

int main(){
    int arr[5]={10,10,10,10,40};
    int t=0,n = sizeof(arr)/sizeof(int);
    int res=1;
    for(int i=0;i<n;i++){
        for(int j=0;j!=i && j<n;j++){
            if(arr[i]!=arr[j]){
                t++;
            }
        }
    }
    cout<<n-t<<endl;
    return 0;
}