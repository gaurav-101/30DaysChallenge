long long divide(long long dividend, long long divisor)
{
    int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;
    dividend = abs(dividend);
    divisor = abs(divisor);
    long long quotient = 0, temp = 0;
    for (int i = 31; i >= 0; --i)
    {
        if (temp + (divisor << i) <= dividend){
            temp += divisor << i ; // divisor*(2^i)
            quotient += 1LL << i; //2 ^ i
        }
    }
    if (sign == -1)
        quotient = -quotient;
    return quotient;
}