int height(node* node);

bool isBalanced(node* root)
{
    if (root == NULL)
        return 1;

    lh = height(root->left);
    rh = height(root->right);
 
    if (abs(lh - rh) <= 1 && isBalanced(root->left) && isBalanced(root->right))
        return 1;
  
       return 0;
}
