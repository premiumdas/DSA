#include <iostream>
using namespace std;

int natsum(int n){
    if (n==1){
        return 1;
    }
    return n + natsum(n-1);
}

int main(){
    cout << natsum(6)<<endl;
    return 0;
}