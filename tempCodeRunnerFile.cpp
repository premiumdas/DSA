void bfs(vector<vector<int>> &adjlist){
    vector<bool> visited(adjlist.size());
    for(int i=1; i<adjlist.size(); i++){
        cout<<i<<" ";
        for(auto j:adjlist[i]){
            if(visited[j]!=true){
                cout<<j<<" ";
                visited[j]=true;
            }
        }
    }
}