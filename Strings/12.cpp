int maxSubStr(string str){
    int ans=0;
    int count=1;
    char prev=str[0];
    int i=1;
    while(i<str.length()){
        if(str[i]==prev){
            count++;
        }
        else{
            count--;
        }
        if(count==0){
            ans++;
        }
        i++;
    }
    if(count!=0){
        return -1;
    }
    return ans;
}