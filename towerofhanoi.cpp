#include <iostream>
using namespace std;

void hanoi(int n, char a, char b,char c){
    if(n==1){
        cout << "Move "<<n<<" from "<<a<<" to "<<c<<endl;
        return;
    }
    hanoi(n-1, a, c, b);
    cout << "Move "<<n<<" from "<<a<<" to "<<c<<endl;
    hanoi(n-1, b, a, c);
    return;
}

int main(){
    hanoi(3,'A','B','C');
    return 0;
}