class Solution {
public:
    bool isSafe(int x, int y, int n, int m) {
        return (x >=0 && x < n && y >=0 && y < m);
    }
    bool dfs(int i, int j, int len, string word, int n, int m, vector<vector<char>>& board, vector<vector<bool>> &visited)
    {
        if(visited[i][j]) return false;
        visited[i][j] = 1;
        if(len == word.size()) return true;
        vector<int> dirX = {0, 0, -1, 1};
        vector<int> dirY = {1, -1, 0, 0};
        for(int l=0; l<4; ++l) {
            int newX = i + dirX[l];
            int newY = j + dirY[l];
            if(isSafe(newX, newY, n, m) && board[newX][newY] == word[len]) {
                if(dfs(newX, newY, len+1, word, n, m, board, visited))
                    return true;
            }
        }
        visited[i][j] = 0;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        char start = word[0];
        vector<vector<bool>> visited(n, vector<bool>(m,0));
        for(int i=0; i<n; ++i) {
            for(int j=0; j<m; ++j) {
                if(board[i][j] == start && dfs(i, j, 1, word, n, m, board, visited)) return true;
            }
        }
        return false;
    }
};
