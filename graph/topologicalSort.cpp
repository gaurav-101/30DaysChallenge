#include<unordered_map>
#include<list>
#include<stack>

void solve(int node, unordered_map<int, bool>& visited, stack<int>& ans, unordered_map<int, list<int>> adj){
    visited[node]=1;
    for(auto i: adj[node]){
        if(!visited[i]){
            solve(i, visited, ans, adj);
        }
    }
    ans.push(node);
}

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    // creating adjacent list
    unordered_map<int, list<int>> adj;
    for(int i=0; i<edges.size(); i++){
        int u=edges[i][0];
        int v=edges[i][1];
        
        adj[u].push_back(v);
    }
    stack<int> ans;
    // taking all the components
    unordered_map<int, bool> visited;
    for(int i=0; i<v; i++){
        if(!visited[i]){
            solve(i, visited, ans, adj);
        }
    }
    
    vector<int> anss;
    while(!ans.empty()){
        int temp=ans.top();
        anss.push_back(temp);
        ans.pop();
    }
    return anss;
}