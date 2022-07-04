string isSubset(int a1[], int a2[], int n, int m) {
    set<int> a;
    for(int i=0;i<n;i++){
        a.insert(a1[i]);
    }
    bool ans=true;
    for(int i=0;i<m;i++){
        if(a.find(a2[i]) == a.end()){
            ans=false;
            break;
            
        }
    }
    if(ans){
        return "Yes";
    }
    else{
        return "No";
    }
}