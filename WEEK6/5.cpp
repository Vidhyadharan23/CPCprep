int getMaxWidth(node* root)
{
    int maxWidth = 0;
    int width;
    int h = height(root);
    int i;
  
    /* Get width of each level and compare
        the width with maximum width so far */
    for (i = 1; i <= h; i++) {
        width = getWidth(root, i);
        if (width > maxWidth)
            maxWidth = width;
    }
  
    return maxWidth;
}
  
/* Get width of a given level */
int getWidth(node* root, int level)
{
  
    if (root == NULL)
        return 0;
  
    if (level == 1)
        return 1;
  
    else if (level > 1)
        return getWidth(root->left, level - 1) + getWidth(root->right, level - 1);
}
