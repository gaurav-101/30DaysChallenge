vector<int> singleNumber(vector<int> nums) 
{
    int xorr=0;
    for (int i=0;i<nums.size();i++){
        xorr= xorr^nums[i];
    }
    // right most position of 1 in xorr
    int pos=xorr& ~(xorr-1);
    
    int num1=0,num2=0;
    for (int i=0;i<nums.size();i++){
        // elements that have 1 on that position
        if(nums[i]&pos){
            num1= num1^nums[i];
        }
        // elements that have 0 on that position
        else{
            num2= num2^nums[i];
        }
    }
    vector<int> ans;
    ans.push_back(num2);
    ans.push_back(num1);
    sort(ans.begin(),ans.end());
    return ans;
    
}