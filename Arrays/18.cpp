int getPairsCount(int arr[], int n, int K) {
    map<int,int> M;
    int count=0;
    for(int i=0;i<n;i++){
        if (M.find(K-arr[i]) != M.end()) {
            
            count+= M[K-arr[i]];
            
        }
        // Updating frequency in map
        if (M.find(arr[i]) == M.end()) {
            M[arr[i]] = 1;
        }
    
        else {
            M[arr[i]]++;
        }
        
    }
    
    return count;
    
}