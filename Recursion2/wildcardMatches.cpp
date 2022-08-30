#include<iostream>
#include<string>
using namespace std;


bool solve(string s, string p, int i, int j){
    if(i==s.length() and j==p.length()){
        return true;
    }
    if(s[i]==p[j] or p[j]=='?') {
        return solve(s,p,i+1,j+1);
    }
    else if(p[j]=='*'){
        int temp=i;
        while(temp<=s.length()){
            if(solve(s,p,temp,j+1)){
                return true;
            }
            temp++;
        }
    }
    return false;
}
bool isMatch(string s, string p) {
    int i=0;
    int j=0;
    return solve(s,p,i,j);
}
int main(){
    string s;
    string p;
    cin>>s>>p;
    cout<<isMatch(s,p);
}