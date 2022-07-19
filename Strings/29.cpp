string secFrequent (string arr[], int n)
{
    unordered_map<string, int> m;
    for (int i=0;i<n;i++){
        if(m[arr[i]]){
            m[arr[i]]++;
        }
        else{
            m[arr[i]]=1;
        }
    }
    if(m.size()==1){
        return "";
    }
    
    unordered_map<string, int>::iterator itr=m.begin();
    int currMax=INT_MIN;
    string maxi="";
    for (itr = m.begin(); itr != m.end(); ++itr) { 
        if(itr->second > currMax){
            currMax=itr->second;
            maxi=itr->first;
        }
    } 
    m.erase(maxi);
    
    currMax=INT_MIN;
    maxi="";
    for (itr = m.begin(); itr != m.end(); ++itr) { 
        if(itr->second > currMax){
            currMax=itr->second;
            maxi=itr->first;
        }
    }
    return maxi;
}