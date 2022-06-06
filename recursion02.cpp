#include <iostream>
using namespace std;

void fun(int n){
    if (n==0){
        return;
    }
    fun(n-1);
    cout << n << " ";
}

int main(){
    int n;
    cout << "Enter a number N to print from 1 to N\t\t";
    cin >> n;
    fun(n);
    return 0;
}