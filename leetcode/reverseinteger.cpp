#include <iostream>
using namespace std;

int reverse(int n,int ans){
    if(n==0){
        return 0;
    }
    ans = ans*10 + n%10;
    reverse(n/10,ans);
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<reverse(n,0)<<endl;
    return 0;
}