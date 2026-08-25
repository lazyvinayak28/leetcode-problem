class Solution {
public:
    int ans = 0;
    void solve(string &tiles, vector<int> &vis, int n) {
        for (int i = 0; i < n; i++) {
            if (vis[i])
                continue;
            if (i > 0 && tiles[i] == tiles[i - 1] && !vis[i - 1])
                continue;
            vis[i] = 1;
            ans++;
            solve(tiles, vis, n);
            vis[i] = 0;}
    }
    int numTilePossibilities(string tiles) {
        sort(tiles.begin(), tiles.end());
        int n = tiles.size();
        vector<int> vis(n, 0);
        solve(tiles, vis, n);
        return ans;}
};