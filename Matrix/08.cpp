int findMaxValue(vector<vector<int>>& mat, int n) {
    int maxValue = INT_MIN;
 
    // maxArr[i][j] stores max of elements in matrix
    // from (i, j) to (N-1, N-1)
    int minArr[n][n];
 
    // last element of maxArr will be same's as of
    // the input matrix
    minArr[0][0] = mat[0][0];
 
    // preprocess last row
    int minv = mat[0][0];  // Initialize max
    for (int j = 1; j < n; j++)
    {
        if (mat[0][j] < minv)
            minv = mat[0][j];
        minArr[0][j] = minv;
    }
    // preprocess last column
    minv = mat[0][0];  // Initialize max
    for (int i = 1; i < n; i++)
    {
        if (mat[i][0] < minv)
            minv = mat[i][0];
        minArr[i][0] = minv;
    }
 
    // preprocess rest of the matrix from bottom
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            // Update maxValue
            if (mat[i][j] - minArr[i-1][j-1]  > maxValue)
                maxValue= mat[i][j] - minArr[i-1][j-1];
 
            // set maxArr (i, j)
            minArr[i][j] = min(mat[i][j], min(minArr[i][j - 1], minArr[i - 1][j]) );
        }
    }
 
    return maxValue;

}

