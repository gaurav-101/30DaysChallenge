vector<int> factorial(int n){
    vector<int> ans;
    ans.push_back(1);
    int carry=0;
    int temp=0;
    int sum=0;
    for(int i=1;i<=n;i++){
        int index=0;
        int carry=0;
        sum=i* ans[index];
        carry=sum/10;
        ans[index]=sum%10;
        index++;
        while(index<ans.size()){
            sum=i* ans[index]+carry;
            carry=sum/10;
            ans[index]=sum%10;
            index++;
        }
        while(carry!=0){
            ans.push_back(carry%10);
            carry/=10;
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}