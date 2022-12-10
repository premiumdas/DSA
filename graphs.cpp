#include <iostream>
#include <vector>

using namespace std;

// void bfs(vector<vector<int>> &adjlist){
//     vector<bool> visited(adjlist.size());
//     for(int i=1; i<adjlist.size(); i++){
//         cout<<i<<" ";
//         for(auto j:adjlist[i]){
//             if(visited[j]!=true){
//                 cout<<j<<" ";
//                 visited[j]=true;
//             }
//         }
//     }
// }

void dfs(vector<vector<int>> &adjlist, vector<int> &visited, int n){
    cout<<n;
    visited[n]=1;
    for(int i=0; i<adjlist[n].size(); i++){
        if(visited[adjlist[n][i]]==0){
            
            visited[adjlist[n][i]]=1;
            dfs(adjlist, visited, adjlist[n][i]);
        }
    }
}

int main(){
    int e = 10;
    //cin>>e;
    vector<vector<int>> edges = {{1,3}, {1,4}, {1,5}, {2,3}, {2,5}, {4,5}, {4,6}, {5,7}, {5,6}, {6,7}};
    // for(int i=0; i<e; i++){
    //     cin>>edges[i][0]>>edges[i][1];
    // }    
    vector<vector<int>> adjlist(11);
    for(int j=0; j<e; j++){
        adjlist[edges[j][0]].push_back(edges[j][1]);
        adjlist[edges[j][1]].push_back(edges[j][0]);
    }
    vector<int> visited(11,0);
    
    for(int i=1; i<11; i++){
        if(visited[i]==0){
            dfs(adjlist,visited, 1);
        }
        
    }
    
    // for(int i=1; i<e; i++){
    //     cout<<i<<"->";
    //     for(int j=0; j<adjlist[i].size(); j++){
    //         cout<<adjlist[i][j]<<" ";
    //     }
    // }

    //bfs(adjlist);
    
    return 0;
}
