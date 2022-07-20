//Iterative Way using two stack
vector <int> postOrder(Node* root)
{
    Node* node=root;
    vector < int > postOrder;
    stack<Node*> s1,s2;
    s1.push(node);
    while(!s1.empty()){
        node=s1.top();
        s1.pop();
        s2.push(node);
        
        if(node->left){
            s1.push(node->left);
        }
        if(node->right){
            s1.push(node->right);
        }
    }
    while(!s2.empty()){
        postOrder.push_back((s2.top())->data);
        s2.pop();
    }
    return postOrder;
}


//Recursive way
void solve(Node* root, vector<int>& ans){
    if(root==NULL){
        return;
    }
    
    solve(root->left,ans);
    solve(root->right,ans);
    ans.push_back(root->data);
    return;
}
vector <int> postOrder(Node* root)
{
    vector <int> ans;
    solve(root,ans);
    return ans;
}