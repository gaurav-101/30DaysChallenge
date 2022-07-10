//Method-2   // Using Recursion
void solve(vector<string>& ans, string str, string output, int i) {
    //base case
    if(i>=str.length()) {
        if(output.length()>0)
        ans.push_back(output);
        return ;
        }
    
    //exclude
    solve(ans, str, output, i+1);
    //include
    output.push_back(str[i]);
    solve(ans, str, output, i+1);
}

vector<string> subsequences(string str){
	
	vector<string> ans;
    string output = "";
    solve(ans,str,output,0);
    return ans;
	
}


//   Method -1 // Using Bit
void printSS(string ques, string ans){
    int t=ques.length();
    int n=pow(2,t)-1;
    while(n!=0){
        int temp=n;
        int i=0;
        while(temp!=0){
            if(temp&1){
                cout<<ques[i];
            }
            i++;
            temp= temp>>1;
        }
        cout<<endl;
        n--;
    }
    
}

int main(){
    string str;
    cin >> str;
    printSS(str, "");
}