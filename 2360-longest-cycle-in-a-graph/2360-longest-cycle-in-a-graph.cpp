class Solution {
public:
    int longestCycle(vector<int>& edges) {
        int res = -1;
        int step = 1;
        vector<int> visit (edges.size(),0);
        for (int i = 0; i < edges.size(); i++) {
            int begin = step;
            int cur = i;
            while (cur != -1 && visit[cur] == 0) {
                visit[cur] = step++;
                cur = edges[cur];
            }
            if (cur != -1 && visit[cur] >= begin) {
                res = max(res, step - visit[cur]);
            }
        }
        return res;
    }
};