void deleteMid(stack<int>&s, int sizeOfStack)
{
    int middle=(sizeOfStack)/2;
    
    stack<int> s2;
    for(int i=1;i<=middle;i++){
        int temp=s.top();
        s.pop();
        s2.push(temp);
    }
    s.pop();
    while(!s2.empty()){
        int temp=s2.top();
        s2.pop();
        s.push(temp);
    }
}