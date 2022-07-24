struct Node
{
    int data;
    Node* left, * right;
};
  
Node* newNode(int data)
{
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->left = node->right = NULL;
    return (node);
}

int maxDepth(Node* node)
{
    if (node == NULL)
        return -1;
    else
    {
        /* compute the depth of each subtree */
        int lDepth = maxDepth(node->left);
        int rDepth = maxDepth(node->right);
     
        /* use the larger one */
        if (lDepth > rDepth)
            return(lDepth + 1);
        else return(rDepth + 1);
    }
}

Node *insertLevelOrder(char* arr, int i, int n)
{
    Node *root = nullptr;
    // Base case for recursion
    if (i < n)
    {
        root = newNode(arr[i]);

        root->left=
        if(root->left->data!=0){
            
            root->left->left = insertLevelOrder(arr,2 * i + 1, n);
            root->right->right = insertLevelOrder(arr, 2 * i + 2, n);
        }
        else{
            root->left=
        }
    }
    return root;
}
int familyHierarchy(char* input){
    int i=0;
    int n=input.size();
    Node* root=insertLevelOrder(input, i, n);
    cout<<maxDepth(root)<<endl;
    
}