struct node* inOrderSuccessor(
    struct node* root,
    struct node* n)
{
    if (n->right != NULL)
        return minValue(n->right);

    struct node* p = n->parent;
    while (p != NULL && n == p->right) {
        n = p;
        p = p->parent;
    }
    return p;
}
struct node* minValue(struct node* node)
{
    struct node* current = node;
 
    /* loop down to find the leftmost leaf */
    while (current->left != NULL) {
        current = current->left;
    }
    return current;
}
