int findNum(int n)
{
    int count5=0;
    for(int i=0;i<=n;i++){
        int temp=i*5;
        while(temp%5==0 and temp>0){
            count5++;
            temp/=5;
        }
        if(count5>=n){
            return i*5;
        }
    }
    return -1;
}