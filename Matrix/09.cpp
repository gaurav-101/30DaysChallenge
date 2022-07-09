void rotate90clockwise(int mat[n][n])
{
    // Transpose of matrix
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            swap(mat[i][j], mat[j][i]);
    // Reverse individual rows
    for (int i = 0; i < n; i++) {
        int low = 0, high = n - 1;
        while (low < high) {
            swap(mat[i][low], mat[i][high]);
            low++;
            high--;
        }
    }
}