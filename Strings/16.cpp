bool ispar(string x)
{
    int i=0;
    stack <char> s;
    while(i<x.length()){
        if(x[i]=='[' || x[i]=='{' || x[i]=='('){
            s.push(x[i]);
        }
        else if(x[i]==']'){
            if(s.empty() || s.top()!='['){
                return false;
            }
            s.pop();
        }
        else if(x[i]==')'){
            if(s.empty() || s.top()!='('){
                return false;
            }
            s.pop();
        }
        else{
            if(s.empty() || s.top()!='{'){
                return false;
            }
            s.pop();
        }
        i++;
    }
    if(!s.empty()){
        return false;
    }
    return true;
}