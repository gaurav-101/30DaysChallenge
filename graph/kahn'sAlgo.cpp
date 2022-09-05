vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    // creating adjacent list
    unordered_map<int, list<int>> adj;
    vector<int> indegree(v);
    for(int i=0; i<e; i++){
        int u=edges[i][0];
        int v=edges[i][1];
        adj[u].push_back(v);
    }
    
    for(auto i: adj){
        for(auto j: i.second){
            indegree[j]++;
        }
    }
    
    vector<int> ans;
    unordered_map<int, bool> visited;
    queue<int> q;
    for(int i=0;i<v;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    while(!q.empty()){
        int front=q.front();
        q.pop();
        ans.push_back(front);
        
        for(auto j: adj[front]){
            indegree[j]--;
            if(indegree[j]==0){
                q.push(j);
            }
        }
    }
        
    return ans;
}