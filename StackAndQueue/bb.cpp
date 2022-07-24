#include <bits/stdc++.h>
using namespace std;
 
// Function to check if a word is
// palindrome
bool checkPalin(string word)
{
    int n = word.length();
    transform(word.begin(), word.end(), word.begin(), ::tolower);
 
    for (int i = 0; i < n; i++,n--)
    if (word.at(i) != word.at(n - 1))
        return false;    
    return true;
}
 
// Function to count palindrome words
int countPalin(string str)
{        
    // to check last word for palindrome
    str = str + " ";
     
    // to store each word
    string word = "";
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str.at(i);
         
        // extracting each word
        if (ch != ' ')
            word = word + ch;
        else {
            if (checkPalin(word))
                count++;
            word = "";
        }
    }
     
    return count;
}
     
// Driver code
void solve(){
    string s;
    cin>>s;
    int n;
    cin>>n;
    cout<<countPalin(s)<<endl;
    
}
int main() {
	int n;
	cin>>n;
	while(n--){
	    solve();
	    cout<<endl;
	}
	return 0;
}