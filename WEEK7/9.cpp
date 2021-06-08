class Solution {
public:
   
 void dfs(vector<vector<int>> &rooms, int m, vector<bool> &visited){
        visited[m] = true;
        for(int i = 0; i < rooms[m].size(); i++){
            if(!visited[rooms[m][i]]){
                dfs(rooms, rooms[m][i], visited);
            }
        }
    }

    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int i, n=rooms.size();
        vector<bool> visited(n, false);
        dfs(rooms, 0, visited);
        for(i = 0; i < n; i++){
            if(!visited[i]){
                return false;
            }
        }
        return true;
    }
};
