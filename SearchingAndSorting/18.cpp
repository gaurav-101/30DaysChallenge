int minSwaps(vector<int>&nums)
{
    int n=nums.size();
    map<int,int> m;
    for(int i=0;i<n;i++){
        m.insert(make_pair(nums[i],i));
    }
    map<int, int>::iterator itr;
    int i=0;
    int ans=0;
    for (itr = m.begin(); itr != m.end(); ++itr) {
        if(itr->second !=i){
            int temp=nums[i];
            swap(nums[itr->second], nums[i]);
            m[temp]=itr->second;
            itr->second=i;
            
            ans++;
            
        }
        i++;
    }
    return ans;
}