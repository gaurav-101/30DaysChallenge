vector<int> shortestPath( vector<pair<int,int>> edges , int n , int m, int s , int t){
	// make adjacent list
    unordered_map<int, list<int>> adj;
    for(int i=0; i<edges.size(); i++){
        int u= edges[i].first ;
        int v= edges[i].second ;
        
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
	
    unordered_map<int, bool> visited;
    unordered_map<int, int> parent;
    
    queue<int> q;
    q.push(s);
    parent[s]=-1;
    visited[s]=1;
    while(!q.empty()){
        int front=q.front();
        q.pop();
        for(auto i: adj[front]){
            if(!visited[i]){
                visited[i]=1;
                parent[i]=front;
                q.push(i);
            }
        }
    }

    
    vector<int> ans;
    int temp=t;
    ans.push_back(temp);
    while(temp!= s){
        temp=parent[temp];
        ans.push_back(temp);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}