#include<iostream>
#include <iomanip>
#include <stdlib.h>
#include <unistd.h>
#include <chrono>
#include <thread>
using namespace std;

int main(){
    string word = "Hello boredom";                                                                                                                                                                                                                                                                                                                                      
    string ans = "";
    for(int i=0; i<word.size(); i++){
        for(char j = 32; j<=126; j++){
            if(j==word[i]){
                ans = ans + j;
                cout<<ans<<endl;
                this_thread::sleep_for(chrono::milliseconds(20));
                break;    
            }
            else{
                cout<<ans + j<<endl;
                this_thread::sleep_for(chrono::milliseconds(20));
            }
            
        }
    }
    if(ans == word){
        for(int i=0; i<420; i++){
            cout<<ans<<endl;
            this_thread::sleep_for(chrono::milliseconds(20));
        }
    }
    return 0;
}