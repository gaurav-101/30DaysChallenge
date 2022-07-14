int calculateSquare(int n)
{
    n=abs(n);
    int ans=0;
    int temp=n;
    int pos=0;
    while(temp!=0){
        if(temp&1)
            ans+= n<<pos;
        pos++;
        temp=temp>>1;
    }
    return ans;
}