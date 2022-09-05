int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
    // creating adjacent list
    unordered_map<int, list<int>> adj;
    vector<int> indegree(n);
    for(int i=0; i<edges.size(); i++){
        int u=edges[i].first -1;
        int v=edges[i].second -1;
        adj[u].push_back(v);
    }
    
    // find all indegree of each node
    for(auto i: adj){
        for(auto j: i.second){
            indegree[j]++;
        }
    }
    
    //pushing all nodes whose indegree is zero
    queue<int> q;
    for(int i=0;i<n;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    
    //do bfs
    int cnt=0;
    while(!q.empty()){
        int front=q.front();
        q.pop();
        //increase count
        cnt++;
        
        //neighbour indegree update
        for(auto j: adj[front]){
            indegree[j]--;
            if(indegree[j]==0){
                q.push(j);
            }
        }
    }
    
    if(cnt==n){
        return 0;
    }
    return 1;
}