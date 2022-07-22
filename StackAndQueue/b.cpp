#include <bits/stdc++.h>

using namespace std;

void solve(int total, int n, vector<int> v,vector<int >& ans){
    multimap<int, int, greater<int> > m;
    m.insert(make_pair(v[0],1));
    int sum=v[0];
    ans.push_back(0);
    multimap<int, int>::iterator it;
    for(int i=1;i<n;i++){
        sum+=v[i];
        int temp=sum;
        int count=0;
        it=m.begin();
        while(sum>total){
            sum-=it->first;
            it++;
            count++;
        }
        ans.push_back(count);
        sum=temp;
        m.insert(make_pair(v[i],1));
    }
    return ;
}
int main(){
    
    int total;
    cin>>total;
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int j;
        cin>>j;
        v.push_back(j);
    }
    vector<int> ans;
    solve( total,  n, v, ans);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}