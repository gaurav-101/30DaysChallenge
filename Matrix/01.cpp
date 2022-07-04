vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        vector <int> answer;
        int count=r*c; int st_row=0, st_col=0, end_row=r-1, end_col=c-1;
        int dir=1;
        while(count>0 && st_col<c && st_row<r && end_col>=st_col && end_row>=st_row){
            if(dir==1){
                for(int i=st_col; i<=end_col; i++){
                    answer.push_back(matrix[st_row][i]);
                    count--;
                    
                }
                dir=4;
                st_row++;
            }
            else if(dir==2){
                for(int i=end_col; i>=st_col; i--){
                    answer.push_back(matrix[end_row][i]);
                    count--;
                    
                }
                dir=3;
                end_row--; 
            }
            else if(dir==3){
                for(int i=end_row; i>=st_row; i--){
                    answer.push_back(matrix[i][st_col]);
                    count--;
                    
                }
                dir=1;
                st_col++; 
            }
            else{
                for(int i=st_row; i<=end_row; i++){
                    answer.push_back(matrix[i][end_col]);
                    count--;
                    
                }
                dir=2;
                end_col--; 
            }
        }
        return answer;
    }