void solve(queue<int>& q){
    if(q.size()==0){
        return ;
    }
    int x=q.front();
    q.pop();
    solve(q);
    q.push(x);
    return;
}
queue<int> rev(queue<int> q)
{
    solve(q);
    return q;
}