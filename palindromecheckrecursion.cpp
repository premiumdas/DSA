#include <iostream>
using namespace std;

bool palcheck(string text, int start, int end){
    if (start >= end){
        return true;
    }
    return (text[start]==text[end]) && palcheck(text,start+1,end-1);
}

int main(){
    string text = "deed";
    int end = text.length()-1;
    if (palcheck(text,0,end)){
        cout << "Yes";
    }
    else cout << "No";
    return 0;
}