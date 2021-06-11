class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> v,ans;
	void dfs(vector<int> adj[],int i)
	{
	    v[i]=1;
	    for(auto it:adj[i])
	    {
	        if(v[it]==0)
	        {
	            dfs(adj,it);
	        }
	        else if(v[it]==1)
	        return ;
	    }
	    v[i]=2;
	    ans.insert(ans.begin(),i);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    for(int i=0;i<V;i++)
	    v.push_back(0);
	    for(int i=0;i<V;i++)
	    {
	        if(v[i]==0)
	        {
	            dfs(adj,i);
	        }
	    }
	    return ans;
	}
};
