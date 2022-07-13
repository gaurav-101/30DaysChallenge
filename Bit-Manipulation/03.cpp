int countBitsFlip(int a, int b){
    int xorr=a^b;
    int count=0;
    while(xorr!=0){
        if(xorr&1){
            count++;
        }
        xorr=xorr>>1;
    }
    return count;
}