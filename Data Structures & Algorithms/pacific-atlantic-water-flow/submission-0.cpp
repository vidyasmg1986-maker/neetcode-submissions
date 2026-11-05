class Solution {
public:
    void search(int i, int j, vector<vector<int>>& heights,
                bool& pacific, bool& atlantic, int prev,
                vector<vector<bool>>& visited) {

        int m = heights.size();
        int n = heights[0].size();

        if (i < 0 || j < 0 || i >= m || j >= n)
            return;

        if (visited[i][j] || heights[i][j] > prev)
            return;

        visited[i][j] = true;

        if (i == 0 || j == 0)
            pacific = true;

        if (i == m-1 || j == n-1)
            atlantic = true;

        search(i, j-1, heights, pacific, atlantic,
               heights[i][j], visited);

        search(i, j+1, heights, pacific, atlantic,
               heights[i][j], visited);

        search(i-1, j, heights, pacific, atlantic,
               heights[i][j], visited);

        search(i+1, j, heights, pacific, atlantic,
               heights[i][j], visited);
    }

    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int m = heights.size();
        int n = heights[0].size();

        vector<vector<int>> ans;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                bool pacific = false;
                bool atlantic = false;

                vector<vector<bool>> visited(
                    m, vector<bool>(n, false)
                );

                search(i, j, heights, pacific, atlantic,
                       heights[i][j], visited);

                if (pacific && atlantic)
                    ans.push_back({i, j});
            }
        }

        return ans;
    }
};