void deleteTree(node* node) 
{ 
    if (node == NULL) return; 
  
    /* first delete both subtrees */
    deleteTree(node->left); 
    deleteTree(node->right); 

    delete node;
} 
