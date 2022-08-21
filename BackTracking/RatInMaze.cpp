bool isSafe(int newx, int newy, int n, vector<vector<int>> &m, vector<vector<int>> visited){
    if(newx>=0 and newx<n and newy>=0 and newy<n and m[newx][newy]==1 and visited[newx][newy]==0){
        return true;
    }
    return false;
}
void solve(int x, int y,int n, string temp, vector<vector<int>> m, vector<string>& ans, vector<vector<int>>& visited){
    if(x==n-1 and y==n-1){
        ans.push_back(temp);
        return;
    }
    
    visited[x][y]=1;
    //Down
    if(isSafe(x+1, y, n, m,visited)){
        solve(x+1, y, n, temp+'D', m,ans,visited);
    }
    //Left
    if(isSafe(x, y-1, n, m,visited)){
        solve(x, y-1, n, temp+'L', m,ans,visited);
    }
    //Right
    if(isSafe(x, y+1, n, m,visited)){
        solve(x, y+1, n, temp+'R', m,ans,visited);
    }
    //Up
    if(isSafe(x-1, y, n, m,visited)){
        solve(x-1, y, n, temp+'U', m,ans,visited);
    }
    //BackTracking
    visited[x][y]=0;
}
vector<string> findPath(vector<vector<int>> &m, int n) {
    
    vector<string> ans;
    if(m[0][0]==0){
        return ans;
    }
    string temp="";
    vector<vector<int>> visited( n , vector<int> (n, 0));
    solve(0,0,n,temp, m,ans,visited);
    return ans;
}