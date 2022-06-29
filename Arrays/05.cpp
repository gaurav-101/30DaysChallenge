void segregateElements(int arr[],int n)
{
    map<int,int> ans;
    int i;
    for (i=0;i<n;i++){
        ans.insert(pair<int, int>(i, arr[i]));
    }
    i=0;
    map<int, int>::iterator itr;
    for (itr = ans.begin(); itr != ans.end(); ++itr) {
        if((itr->second)>=0){
            arr[i]=itr->second;
            i++;
        }
        
    }
    for (itr = ans.begin(); itr != ans.end(); ++itr) {
        if((itr->second)<0){
            arr[i]=itr->second;
            i++;
        }
        
    }

}