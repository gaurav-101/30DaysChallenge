int inSequence(int a, int b, int c){
    if(c==0){
        if(b==a)
            return 1;
        else
            return 0;
    }
    if((b-a)%c == 0 and ((b>=a and c>0) or (b<=a and c<0))){
        return 1;
    }
    return 0;
}