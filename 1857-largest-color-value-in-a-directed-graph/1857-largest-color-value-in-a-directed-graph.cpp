class Solution {
public:
    int largestPathValue(string colors, vector<vector<int>>& edges) {
        int n = colors.size();
        vector<vector<int>> adj(n);
        vector<int> indegree(n, 0);

        for(auto &e : edges){
            adj[e[0]].push_back(e[1]);
            indegree[e[1]]++;
        }

        vector<vector<int>> cont(n, vector<int>(26, 0));
        queue<int> q;
        for(int i = 0; i<n; i++){
            if(indegree[i] == 0){
                q.push(i);
                cont[i][colors[i]-'a'] = 1;
            }
        }

        int ans = 0, cnt = 0;
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            cnt++;

            int val = *max_element(cont[curr].begin(), cont[curr].end());
            ans = max(ans, val);

            for(auto &nbgh: adj[curr]){
                for(int i = 0; i<26; i++)
                    cont[nbgh][i] = max(cont[nbgh][i], cont[curr][i] + (i == colors[nbgh]-'a'));
                indegree[nbgh]--;
                if(indegree[nbgh] == 0)
                    q.push(nbgh);
            }
        }

        if(cnt < n)
            return -1;
        else    return ans;
    }
};