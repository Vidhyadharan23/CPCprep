int getLevelDiff(node *root) 
{ 
// Base case 
if (root == NULL) 
        return 0; 
  
return root->data - getLevelDiff(root->left) - 
                    getLevelDiff(root->right); 
} 
