class Solution{   
public:
    bool isSubsetSum(int N, int arr[], int sum){
        // code here 
        int T[N+1][sum+1];
        memset(T,-1,sizeof(T));
        for(int i=0;i<=N;i++)
        {
            for(int j=0;j<=sum;j++)
            {
                if(j==0)
                {
                    T[i][j]=1;
                }
                else if(i==0)
                T[i][j]=0;
                else
                {
                    if(T[i-1][j]==1)
                    T[i][j]=1;
                    else
                    {
                        if(arr[i-1]>j)
                           T[i][j]=T[i-1][j];
                       else
                        T[i][j]=T[i-1][j-arr[i-1]];
                    }
                }
            }
        }
       /*for(int i=0;i<=N;i++)
        {
            for(int j=0;j<=sum;j++)
            cout<<dp[i][j];
            cout<<endl;
        }*/
        if(T[N][sum]==1)
        return true;
        return false;
    }
};
