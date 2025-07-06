void bfs_grid(vector<vector<int>>& grid, int sx, int sy) {
    int n = grid.size(), m = grid[0].size();
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    queue<pair<int, int>> q;
    int dx[4] = {0, 0, 1, -1};
    int dy[4] = {1, -1, 0, 0};

    q.push({sx, sy});
    visited[sx][sy] = true;

    while (!q.empty()) {
        auto [x, y] = q.front(); q.pop();
        for (int dir = 0; dir < 4; dir++) {
            int nx = x + dx[dir], ny = y + dy[dir];
            if (nx >= 0 && ny >= 0 && nx < n && ny < m && !visited[nx][ny]) {
                visited[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }
}