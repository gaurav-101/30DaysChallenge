vector<int> levelOrder(Node* node)
{
    vector<int> ans;
    queue<Node*> q;
    q.push(node);
    q.push(NULL);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        //One level is completed
        if(temp==NULL){
            if(q.size()==0){
                return ans;
            }
            q.push(NULL);
        }
        else{
            ans.push_back(temp->data);
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
    }
    return ans;
}