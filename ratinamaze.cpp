#include <iostream>
using namespace std;

bool rat(int maze,int i,int j){
    if (maze[i][j] == 1){
        rat(maze,i+1,j);
        rat(maze,i,j+1);
    }
}

int main(){
    int maze[4] = {1,2,3,4};
    cout << sizeof(maze)/sizeof(int);
    return 0;
}