// Iterative method
vector <int> preorder(Node* curr)
{
    vector < int > preOrder;
    if (curr == NULL)
    return preOrder;
    
    stack < Node * > s;
    s.push(curr);
    
    while (!s.empty()) {
    Node * topNode = s.top();
    preOrder.push_back(topNode -> data);
    s.pop();
    if (topNode -> right != NULL)
      s.push(topNode -> right);
    if (topNode -> left != NULL)
      s.push(topNode -> left);
    }
    return preOrder;

}

// Recursive method
void solve(Node* root, vector<int>& ans){
    if(root==NULL){
        return;
    }
    ans.push_back(root->data);
    solve(root->left,ans);
    solve(root->right,ans);
    return;
}