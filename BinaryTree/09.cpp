void solve(Node* node, vector<int>& ans, int level){
    if(node==NULL){
        return ;
    }
    if(level==ans.size()){
        ans.push_back(node->data);
    }
    solve(node->left,ans,level+1);
    solve(node->right,ans,level+1);
}

vector<int> leftView(Node *root)
{
    vector<int> ans;
    int level=0;
    solve(root,ans,level);
    return ans;
}