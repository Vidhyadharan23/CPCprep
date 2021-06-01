bool checkUtil(struct Node *root,
            int level, int *leafLevel)
{
    // Base case
    if (root == NULL) return true;
  
    if (root->left == NULL &&
        root->right == NULL)
    {
        if (*leafLevel == 0)
        {
            *leafLevel = level; // Set first found leaf's level
            return true;
        }
        return (level == *leafLevel);
    }
    return checkUtil(root->left, level + 1, leafLevel) &&
            checkUtil(root->right, level + 1, leafLevel);
}
bool check(struct Node *root)
{
    int level = 0, leafLevel = 0;
    return checkUtil(root, level, &leafLevel);
}
 
