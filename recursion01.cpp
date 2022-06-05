#include <iostream>
using namespace std;

void fun(int n){
    if (n==0){
        return;
    }
    cout << n << " ";
    fun(n-1);
}

int main(){
    int n;
    cout << "Enter any number N to print from N to 1\t";
    cin >> n;
    fun(n);
    return 0;
}