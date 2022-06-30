// Method-3 Most optimise approach
//Linked list Cycle
int findDuplicate(vector<int>& nums) {
        int slow=nums[0];
        int fast=nums[0];
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow!=fast);
        
        fast=nums[0];
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
}



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