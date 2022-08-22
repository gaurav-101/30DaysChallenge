bool isSafe(int n, int row, int col, vector<vector<int>>& board){
    int x=row,y=col;
    // check for same row
    while(y>=0){
        if(board[x][y]==1) return false;
        
        y--;
    }
    
        x=row,y=col;
    // check for same row
    while(y>=0){
        if(board[x][y]==1) return false;
        
        y--;
    }
    
    x=row,y=col;
    // check for diagonal
    while(y>=0 and x>=0){
        if(board[x][y]==1) return false;
        
        x--;
        y--;
    }
    
    x=row,y=col;
    // check for diagonal
    while(y>=0 and x<n){
        if(board[x][y]==1) return false;
        
        x++;
        y--;
    }
    
    
    return true;
}
void solve(int n, int col, vector<vector<int>>& ans, vector<int> temp, vector<vector<int>>& board){
    if(col==n){
        ans.push_back(temp);
        return;
    }
    for(int row=0;row<n;row++){
        if(isSafe(n,row,col,board)){
            board[row][col]=1;
            temp.push_back(row+1);
            solve(n,col+1,ans,temp,board);
            temp.pop_back();
            board[row][col]=0;
        }
    }
}
vector<vector<int>> nQueen(int n) {
    vector<vector<int>> board(n, vector<int>(n,0));
    vector<vector<int>> ans;
    int col=0;
    vector<int> temp;
    solve(n,col,ans,temp,board);
    return ans;
}