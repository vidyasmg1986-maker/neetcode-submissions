class NumMatrix {
public:
    vector<vector<int>> mat;

NumMatrix(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    mat.resize(m, vector<int>(n, 0));

    mat[0][0] = matrix[0][0];

    // First row
    for (int j = 1; j < n; j++) {
        mat[0][j] = mat[0][j-1] + matrix[0][j];
    }

    // First column
    for (int i = 1; i < m; i++) {
        mat[i][0] = mat[i-1][0] + matrix[i][0];
    }

    // Rest of the matrix
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            mat[i][j] = matrix[i][j] 
                      + mat[i-1][j] 
                      + mat[i][j-1] 
                      - mat[i-1][j-1];
        }
    }
}

    int sumRegion(int row1, int col1, int row2, int col2) {
    int total = mat[row2][col2];
    if (row1 > 0) total -= mat[row1-1][col2];
    if (col1 > 0) total -= mat[row2][col1-1];
    if (row1 > 0 && col1 > 0) total += mat[row1-1][col1-1];
    return total;
}

};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */