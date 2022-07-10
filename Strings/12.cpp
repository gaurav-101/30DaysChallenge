int maxSubStr(string str){
    int ans=0;
    int count0=0;
    int count1=0;
    int i=0;
    while(i<str.length()){
        if(str[i]=='0'){
            count0++;
        }
        else{
            count1++;
        }
        if(count0==count1){
            ans++;
        }
        i++;
    }
    if(count0!=count1){
        return -1;
    }
    return ans;
}