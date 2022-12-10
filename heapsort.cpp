#include <iostream>
#include<vector>

using namespace std;

void minheapify(vector<int> &a, int index){
    int i= index;
    int left = 2*i + 1;
    int right = 2*i+2;
    if(left< a.size() && a[i]>a[left]){
        i = left;
    }
    if(right<a.size() && a[i]>a[right]){
        i=right;
    }
    if(i!=index){
        swap(a[i], a[index]);
        minheapify(a, i);
    }
}

vector<int> heap(vector<int> &a){
    int mid = a.size()/2;
    for(int i=mid; i>=0; i--){
        minheapify(a,i);
    }
    return a;
}

int main(){
    vector<int> a = {10,9,8,7,0,-1,-3};
    int n = a.size();

    for(int i=0; i<n; i++){
        heap(a);
        cout<<a[0]<<" ";
        a.erase(a.begin());
    }
    //a.erase(a.begin(),1);
    return 0;
}