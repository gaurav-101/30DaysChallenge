// Same as question 20
void StackQueue :: push(int x)
{
    s1.push(x);
}

//Function to pop an element from queue by using 2 stacks.
int StackQueue :: pop()
{
    if(s1.size()==0){
        return -1;
    }
    while(s1.size()>1){
        int temp=s1.top();
        s1.pop();
        s2.push(temp);
    }
    int t=s1.top();
    s1.pop();
    while(s2.size()!=0){
        int temp=s2.top();
        s2.pop();
        s1.push(temp);
    }
    return t;       
}