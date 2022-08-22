bool isSafe(int grid[N][N], int row, int col, int val){
    for(int i=0;i<N;i++){
        //row check
        if(grid[row][i]==val){
            return false;
        }
        //col check
        if(grid[i][col]==val){
            return false;
        }
        //3X3 matrix
        if(grid[3*(row/3) + i/3][3*(col/3) + i%3]==val){
            return false;
        }
    }
    return true;
}

//Function to find a solved Sudoku. 

bool SolveSudoku(int grid[N][N])  
{ 
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(grid[i][j]==0){
                for(int val=1;val<=9;val++){
                    if(isSafe(grid, i, j, val)){
                        grid[i][j]=val;
                        //Recursive Call
                        bool aageSolutionPossible=SolveSudoku(grid);
                        //Return Answer
                        if(aageSolutionPossible){
                            return true;
                        }
                        else{
                            //BackTracking
                            grid[i][j]=0;
                        }
                        
                    }
                }
                
                return false;
            }
        }
    }
}

//Function to print grids of the Sudoku.
void printGrid (int grid[N][N]) 
{
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<grid[i][j]<<" ";
        }
        // cout<<endl;
    }
}