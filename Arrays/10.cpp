int minJumps(int arr[], int n){
        int current=0, jumps=0, farthest=0;
        if(n==1){
            return 0;
        }
        //When we encounter zero on first index
        if(arr[0]==0){
            return -1;
        }
        for(int i=0;i<n-1;i++){
            //Updating maximum farthest index we can go
            farthest=max(farthest, arr[i]+i);
            
            if(i==current){
                //When we encounter zero on middle index and we can't move forward
                if(current==i){
                    return -1;
                }
                
                current=farthest;
                jumps++;
            }
        }
        return jumps;
    }