int nextp(vector<int>& nums, int start, int size){
        int n=start;
        while(n<size){
            if(nums[n]<0)
                n++;
        }
        return n;
    }
    int nextn(vector<int>& nums, int start,int size){
        int n=start;
        while(n<size){
            if(nums[n]>0)
                n++;
        }
        return n;
    }
    vector<int> rearrangeArray(vector<int>& nums) {
        int size=nums.size();
        int p=nextp(nums,0,size);
        int n=nextn(nums,0,size);
        int i=0;
        while(!(p==size-2 && n==size-1)){
            if(p!=i){
                swap(nums[p],nums[n]);
                n=nextn(nums,i,size);
            }
            i++;
            p=nextp(nums,i,size);
            
            if(n!=i){
                swap(nums[p],nums[n]);
                p=nextp(nums,i,size);   
            }
            i++;
            n=nextn(nums,i,size);
            
        }
        return nums;
    }