bool isCycle(int node, int parent, unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adj){
    
    visited[node]=1;
    
    for(auto i:adj[node]){
        if(!visited[i]){
            if(isCycle(i, node, visited, adj)){
                return true;
            }
        }
        else if(i!=parent){
            return true;
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
            bool ans=isCycle(i, -1, visited, adj);
            if(ans){
                return "Yes";
            }
        }
    }
    return "No";
}