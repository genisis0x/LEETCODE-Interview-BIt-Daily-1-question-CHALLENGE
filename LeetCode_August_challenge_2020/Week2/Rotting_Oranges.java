class Solution {
    int ans = 0, row, col;
    private boolean isSafe(int a, int b) {
        // System.out.println(a + " "+ b);
        return (a >=0 && a<row && b>=0 && b<col);
    }
    public int orangesRotting(int[][] grid) {
        row = grid.length; col = grid[0].length;
        int[] dirY = {1, 0, -1, 0};
        int[] dirX = {0, 1, 0, -1};
        Queue<int[]> q = new LinkedList<>();
        for(int i=0; i<row; ++i) {
            for(int j=0; j<col; ++j) {
                if(grid[i][j] == 2) {
                    q.add(new int[]{i,j});
                }
            }
        }
        
        while(!q.isEmpty()) {
            int size = q.size();
            boolean flag = false;
            for(int i=0; i<size; ++i) {
                int[] top = q.poll();
                for(int j=0; j<4; ++j) {
                    int new_X = top[1] + dirX[j];
                    int new_Y = top[0] + dirY[j];
                    if(isSafe(new_Y, new_X) && grid[new_Y][new_X] == 1) {
                        grid[new_Y][new_X] = 2;
                        flag = true;
                        q.add(new int[]{new_Y, new_X});
                    }
                }
            }
            if(flag==true) ans++;
        }
        
        for(int i=0; i<row; ++i) {
            for(int j=0; j<col; ++j) {
                if(grid[i][j]==1)
                    ans = -1;
            }
        }
        return ans;
    }
}
