bool isCycle(int src, unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adj){
    unordered_map<int,int> parent;
    
    parent[src]=-1;
    visited[src]=1;
    queue<int> q;
    q.push(src);
    
    while(!q.empty()){
        int front=q.front();
        q.pop();
        for(auto i:adj[front]){
            if(visited[i]==true and i!=parent[front]){
                return true;
            }
            else if(!visited[i]){
                visited[i]=true;
                parent[i]=front;
                q.push(i);
            }
        }
    }
    return false;
}

string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    //Prepare Adjacent list
    unordered_map<int, list<int>> adj;
    for(int i=0;i<edges.size();i++){
        int u=edges[i][0];
        int v=edges[i][1];
        
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    
    unordered_map<int, bool> visited;
    // To handle disconnected graph-components
    for(int i=0;i<n; i++){
        if(!visited[i]){
            bool ans=isCycle(i, visited, adj);
            if(ans){
                return "Yes";
            }
        }
    }
    return "No";
}