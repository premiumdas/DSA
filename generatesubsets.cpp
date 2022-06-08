#include <iostream>
using namespace std;

void subsets(string text, string curr, int i){
    if (i == text.length()){
        cout << curr<<endl;
        return;
    }
    subsets(text,curr,i+1);
    subsets(text,curr+text[i],i+1);
    return;
}

int main(){
    subsets("AB","",0);
    return 0;
}