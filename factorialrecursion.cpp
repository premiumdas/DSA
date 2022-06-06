#include <iostream>
using namespace std;

long fact(long n){
    if (n==0 || n==1){
        return 1;
    }
    return n*fact(n-1);
}

int main(){
    cout << "Find the factorial of:\t\t";
    long n;
    cin >> n;
    cout << "The factorial of "<<n<<" is "<<fact(n)<<endl;
    return 0;
}