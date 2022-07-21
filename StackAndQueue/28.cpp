queue<int> modifyQueue(queue<int> q, int k) {
    stack<int> s;
    for(int i=0;i<k;i++){
        s.push(q.front());
        q.pop();
    }
    for(int i=0;i<k;i++){
        q.push(s.top());
        s.pop();
    }
    int n=q.size();
    for(int i=0;i<n-k;i++){
        int temp=q.front();
        q.pop();
        q.push(temp);
    }
    return q;
}