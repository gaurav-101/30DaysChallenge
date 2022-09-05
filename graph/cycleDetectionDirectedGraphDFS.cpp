#include<unordered_map>
#include<list>

bool isCycle(int node, unordered_map<int, bool>& visited, unordered_map<int, bool>& visitedDFS, unordered_map<int, list<int>> adj){
    visited[node]=true;
    visitedDFS[node]=true;
    
    for(auto i: adj[node]){
        if(!visited[i]){
            if(isCycle(i, visited, visitedDFS, adj)){
                return true;
            }
        }
        else if(visitedDFS[i]){
            return true;
        }
    }
    visitedDFS[node]=false;
    return false;
}


int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
    //Prepare Adjacent list
    unordered_map<int, list<int>> adj;
    for(int i=0;i<edges.size();i++){
        int u=edges[i].first;
        int v=edges[i].second;
        
        adj[u].push_back(v);
    }
    
    //check to all components
    unordered_map<int, bool> visited;
    unordered_map<int, bool> visitedDFS;
    
    for(int i=0;i<=n; i++){
        if(!visited[i]){
            if(isCycle(i, visited, visitedDFS, adj)){
                return 1;
            }
        }
    }
    return 0;
}