




//Method-2 make frequency array
//TC-O(n)  SC-O(n)


// Method-1 O(nlogn)

int findDuplicate(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int n=nums.size();
    for(int i=0;i<n-1;i++){
        if(nums[i]==nums[i+1]){
            return nums[i];
        }
    }
    return -1;
}