#include <iostream>
using namespace std;
struct node
{
    int data;
    node* left;
    node* right;
};
void BinaryTree2DoubleLinkedList(node *root, node **head)
{
    // Base case
    if (root == NULL) return;
  
    static node* prev = NULL;

    BinaryTree2DoubleLinkedList(root->left, head);

    if (prev == NULL)
        *head = root;
    else
    {
        root->left = prev;
        prev->right = root;
    }
    prev = root;

    BinaryTree2DoubleLinkedList(root->right, head);
}
