#include <iostream>
using namespace std;

int main(){
    int arr[3] = {-20,-50,90};
    int t = sizeof(arr)/sizeof(int);
    string result;
    if (t==1){
        result = "YES";
    }
    else 
    for (int i=0;i<(t-1);i++){
        if(arr[i]<=arr[i+1]){
            result = "YES";
        }

        else {
            result = "NO";
            break;
        }
    }
    cout<<result<<endl;
    return 0;
}