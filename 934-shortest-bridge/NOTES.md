```
class Solution {
public:
queue<pair<int, int>> q; // queue
void dfs(vector<vector<int>>& grid, int i, int j) { // for marking the 1st island visited
if (i<0 or i>=grid.size() or j<0 or j>=grid[0].size() or grid[i][j] == 2 or grid[i][j] == 0)
return;
grid[i][j] = 2; // marking them visited
q.push({i,j}); // adding them to queue
dfs(grid, i+1, j);
dfs(grid, i-1, j);
dfs(grid, i, j+1);
dfs(grid, i, j-1);
}
int bfs(vector<vector<int>>& grid){ // finding the nearest bridge between visited island and unvisited island
int d = 0; // dist
int mindist = INT_MAX; // to store minimum distance
vector<vector<int>> dir = {{1,0}, {0,1}, {-1,0}, {0,-1}};
while (!q.empty()){
int n = q.size();