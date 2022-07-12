vector<vector<int> > fourSum(vector<int> &arr, int k) {
    sort(arr.begin(),arr.end());
    int i=0;
    int n=arr.size();
    int j,left,right;
    
    vector<vector<int> > ans;
    while(i<n-3){
        j=i+1;
        while(j<n-2){
            left=j+1;
            right=n-1;
            int remainSum=k-arr[i]-arr[j];
            while(left<right){
                int temp=arr[left]+arr[right];
                if(temp==remainSum){
                    vector<int> vec;
                    vec.push_back(arr[i]);
                    vec.push_back(arr[j]);
                    vec.push_back(arr[left]);
                    vec.push_back(arr[right]);
                    ans.push_back(vec);
                    left++;
                    while(arr[left]==arr[left-1]){
                        left++;
                    }
                    right--;
                    while(arr[right]==arr[right+1]){
                        right--;
                    }
                }
                else if(temp<remainSum){
                    left++;
                    while(arr[left]==arr[left-1]){
                        left++;
                    }
                }
                else{
                    right--;
                    while(arr[right]==arr[right+1]){
                        right--;
                    }
                }
            }
            j++;
            while(arr[j]==arr[j-1]){
                j++;
            }
        }
        i++;
        while(arr[i]==arr[i-1]){
            i++;
        }
    }
    return ans;
}