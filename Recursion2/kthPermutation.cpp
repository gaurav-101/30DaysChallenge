string kthPermutation(int n, int k)
{
    int fact=1;
    for(int i=1;i<n;i++){
        fact*=i;
    }
    vector<int> numbers;
    for(int i=1;i<=n;i++){
        numbers.push_back(i);
    }
    string ans="";
    k=k-1;
    while(true){
        int index=(k)/fact;
        ans+=to_string(numbers[index]);
        numbers.erase(numbers.begin()+index);
        if(numbers.size()==0){
            break;
        }
        k=k%fact;
        fact/=numbers.size();
    }
    
    return ans;
}