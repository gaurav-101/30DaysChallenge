bool searchMatrix(vector<vector<int>>& m, int target) {
        int rows = m.size();
        int cols = m[0].size();
        int r=0, c=cols-1;
        
        while(r<rows && c>=0){
            int temp=m[r][c];
            if(temp==target){
                return true;
            }
            else if(temp>target){
                c--;
            }
            else{
                r++;
            }
        }
        return false;
    }