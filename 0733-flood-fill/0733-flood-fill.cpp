class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int oldColor = image[sr][sc];
        image[sr][sc] = color;

        if(oldColor == color) return image;

        queue<pair<int, int>> que;
        que.push({sr, sc});

        int changeRow[] = {-1, 0, 1,  0};
        int changeCol[] = { 0, 1, 0, -1};

        while(!que.empty()) {
            int currR = que.front().first;
            int currC = que.front().second;
            que.pop();

            for(int i = 0; i < 4; i++) {
                int nr = currR + changeRow[i];
                int nc = currC + changeCol[i];

                if(nr >= 0 && nc >= 0 && nr < image.size() && nc < image[0].size() && image[nr][nc] == oldColor) {
                    image[nr][nc] = color;
                    que.push({nr, nc});
                }
            }
        }

        return image;
    }
};