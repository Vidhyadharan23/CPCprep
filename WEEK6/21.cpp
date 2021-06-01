void printKDistant(node *root , int k)
{
    if(root == NULL|| k < 0 )
        return;
    if( k == 0 )
    {
        cout << root->data << " ";
         return;
    }
     
        printKDistant( root->left, k - 1 ) ;
        printKDistant( root->right, k - 1 ) ;
     
}
