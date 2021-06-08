class Solution {
public:
    void dfs(vector<bool> &visited,int start,int n,vector<vector<int>>& isConnected){
        visited[start] = true;
        for(int i=0;i<n;i++){
            if(!visited[i] && isConnected[start][i]) {
                dfs(visited,i,n,isConnected);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<bool> visited(n,false);
        int count =0;
        for(int i=0;i<n;i++){
                if(!visited[i]){
                    dfs(visited,i,n,isConnected);
                    count++;
                }
        }
        return count;
    }
};
