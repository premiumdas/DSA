#include <iostream>
using namespace std;

int maxpiece(int n, int a, int b, int c){
    
    if (n<=0 || (n<a && n<b && n<c)){
        return 0;
    }
    
    return max(1+maxpiece(n-a,a,b,c),max(1+maxpiece(n-b,a,b,c),1+maxpiece(n-c,a,b,c)));
}

int main(){
    cout << maxpiece(5,4,2,6)<<endl;
    return 0;
}