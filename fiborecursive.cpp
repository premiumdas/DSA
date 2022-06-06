#include <iostream>
using namespace std;

int fib(int n){
    if (n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else {
        return fib(n-1)+fib(n-2);
    }
}

int main(){
    int n;
    cout << "Enter the Nth term of a fibonacci sequence starting with N=0 for first term which is 0\t\t";
    cin >> n;
    cout << "The "<<n<<" term is:\t"<<fib(n)<<endl;
    return 0;
}