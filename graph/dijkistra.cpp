vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {
    // creating adjacent list
    unordered_map<int, list<pair<int,int>>> adj;
    for(int i=0; i<vec.size(); i++){
        adj[vec[i][0]].push_back(make_pair(vec[i][1], vec[i][2]) );
        adj[vec[i][1]].push_back(make_pair(vec[i][0], vec[i][2]) );
    }
    
    // creation of distance array with infinite value initially
    vector<int> dis(vertices, INT_MAX);
    
    // creation of set on basis of (distance, node-value)
    set<pair<int, int>> s;
    
    // initialise distance and set with source node
    dis[source]=0;
    s.insert(make_pair(0,source));
    
    // main logic of bfs
    while(!s.empty()){
        // fetch top record
        auto top=*(s.begin());
        
        int distance=top.first;
        int value=top.second;
        
        // remove top record now
        s.erase(s.begin());
        
        // traverse on neighbours(i)
        for(auto i: adj[value]){
            if(dis[i.first]> distance + i.second){
                auto record=s.find(make_pair(dis[i.first], i.first));
                
                // if record found then erase it
                if(record != s.end()){
                    s.erase(record);
                }
                
                // distance update
                dis[i.first]=distance + i.second;
                
                // record push in set
                s.insert(make_pair(dis[i.first], i.first));
            }
        }
    }
    return dis;
}