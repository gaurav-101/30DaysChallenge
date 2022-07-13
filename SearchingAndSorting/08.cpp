int majorityElement(int a[], int size)
{
    int count=0;
    int candidate=0;
    for(int i=0;i<size;i++){
        if(count==0){
            candidate=a[i];
        }
        if(candidate==a[i]){
            count++;
        }
        else{
            count--;
        }
    }
    if(count==0){
        return -1;
    }
    //checking whether this candidate occur greater than n/2 times or not
    count=0;
    for(int i=0;i<size;i++){
        if(a[i]==candidate){
            count++;
        }
    } 
    if(count>size/2){
        return candidate;
    }
    else{
        return -1;
    }
}