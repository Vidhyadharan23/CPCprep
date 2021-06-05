Node* sortedListToBSTRecur(Node **head_ref, int n) 
{ 
    /* Base Case */
    if (n <= 0) 
        return NULL; 
    Node *left = sortedListToBSTRecur(head_ref, n/2); 

    Node *root = *head_ref; 

    root->prev = left; 

    *head_ref = (*head_ref)->next; 

    root->next = sortedListToBSTRecur(head_ref, n-n/2-1); 
  
    return root; 
} 
