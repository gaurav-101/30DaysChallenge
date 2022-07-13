int findMin(vector<int>& nums) {
    int pivot=-1;
    int h=nums.size();
    for(int i=0;i<h-1;i++){
        if(nums[i]>nums[i+1]){
            pivot=i;
            break;
        }
    }
    return nums[pivot+1];
}