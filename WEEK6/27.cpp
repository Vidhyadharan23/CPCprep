void modifyBSTUtil(Node* root, int* sum)
{
    if (root == NULL)
        return;
 
    // Recur for right subtree
    modifyBSTUtil(root->right, sum);

    *sum = *sum + root->data;
    root->data = *sum;
 
    modifyBSTUtil(root->left, sum);
}
void modifyBST(Node* root)
{
    int sum = 0;
    modifyBSTUtil(root, &sum);
}
