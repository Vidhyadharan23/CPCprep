TNode* sortedArrayToBST(int arr[], int start, int end) 
{ 
    /* Base Case */
    if (start > end) 
    return NULL; 
 
    int mid = (start + end)/2; 
    TNode *root = newNode(arr[mid]); 

    root->left = sortedArrayToBST(arr, start, mid - 1); 
  
    root->right = sortedArrayToBST(arr, mid + 1, end); 
  
    return root; 
} 
