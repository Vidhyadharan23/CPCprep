int minValue(struct node* node) 
{ 
struct node* current = node; 

while (current->left != NULL) 
{ 
    current = current->left; 
} 
return(current->data); 
} 
