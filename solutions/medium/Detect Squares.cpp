// Title: Detect Squares
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/detect-squares/

        for (int x = 0; x <= 1000; x++) {
            if (x == px || cnt[x][py] == 0) continue;   // (x, py) is the horizontal neighbor
            int d = abs(x - px);                        // side length
            if (py + d <= 1000)                         // square above
                res += cnt[x][py] * cnt[px][py + d] * cnt[x][py + d];
            if (py - d >= 0)                            // square below
                res += cnt[x][py] * cnt[px][py - d] * cnt[x][py - d];
        }
        return res;
    }
};
class DetectSquares {
    int cnt[1001][1001] = {};   // cnt[x][y] = how many times (x,y) was added
public:
    DetectSquares() {}

    void add(vector<int> point) {
        cnt[point[0]][point[1]]++;
    }

    int count(vector<int> point) {
        int px = point[0], py = point[1], res = 0;
