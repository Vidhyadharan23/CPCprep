bool hasPathSum(node* Node, int sum)
{
    if (Node == NULL)
    {
        return (sum == 0);
    }
     
    else
    {
        bool ans = 0;
     
        int subSum = sum - Node->data;
    
        if ( subSum == 0 && Node->left == NULL && Node->right == NULL )
        return 1;

        if(Node->left)
            ans = ans || hasPathSum(Node->left, subSum);
        if(Node->right)
            ans = ans || hasPathSum(Node->right, subSum);
     
        return ans;
    }
}
