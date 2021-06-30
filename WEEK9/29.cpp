class Solution {
public:
    bool isMatch(string s, string p) {
        int n=s.size();
        int m=p.size();
        int dp[n+1][m+1];
        memset(dp,0,sizeof(dp));
        dp[0][0]=1;
        
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                if(s[j]==p[i] || p[i]=='.')
                {
                    if(j>0)
                    dp[i][j]|=dp[i-1][j-1];
                }
                else if(p[i]=='.')
                {
                    dp[i][j]|=dp[i-2][j];
                    dp[i][j]|=dp[i-1][j];
                }
                else if(s[j]==p[i-1] || p[i-1]=='*')
                {
                    if(j>0)
                    dp[i][j]|=dp[i][j-1];
                }
            }
        }
        return dp[n][m];
    }
};
