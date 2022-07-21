vector<long long> printFirstNegativeInteger(long long int a[],
                                             long long int n, long long int k) {
    
    vector<long long int> ans;
    queue<long long int> q;
    for(long long int i=0;i<k;i++){
        if(a[i]<0){
            q.push(i);
        }
    }
    if(q.size()==0){
        ans.push_back(0);
    }
    else{
        ans.push_back(a[q.front()]);
    }
    
    for(long long int i=k;i<n;i++){
        //removal
        if(!q.empty() && i-q.front()>=k){
            q.pop();
        }
        
        //addition
        if(a[i]<0){
            q.push(i);
        }
        
        //store answer
        if(q.size()==0){
            ans.push_back(0);
        }
        else{
            ans.push_back(a[q.front()]);
        }
    }
    return ans;                                        
 }