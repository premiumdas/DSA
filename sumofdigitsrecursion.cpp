#include <iostream>
using namespace std;

int digitsum(int n){
    if (n==0){
        return 0;
    }
    int t = n%10;
    return t+digitsum(n/10);
}

int main(){
    cout << digitsum(9987)<<endl;
    return 0;
}