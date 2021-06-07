bool solve(int n, vector<vector<int>>& friends) {
    set<int> m;
    for (int i = 0; i < friends.size(); i++) {
        vector<int> x = friends[i];
        for (int j = 0; j < x.size(); j++) {
            m.insert(x[j]);
        }
    }
    if (m.size() == n) return true;
    return false;
}
