#include <iostream>
using namespace std;

void permu(string s,int l,int r){
    if (l==r){
        cout<<s<<" ";
        return;
    }
    for(int i=l;i<=r;i++){
        swap(s[i],s[l]);
        permu(s,l+1,r);
        swap(s[i],s[l]);
        
    }
}

int main(){
    string s="ABC";
    int t=s.length()-1;
    permu(s,0,t);
    return 0;
}