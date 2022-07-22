#include <iostream> 
#include<vector>
using namespace std;

void permute(vector<string> a, int l, int r, string goal, int& ans) 
{ 
    // Base case 
    if (l == r) {
        string str="";
        for(int i=0;i<a.size();i++){
            str+=a[i];
        }
        if(str==goal){
            ans=max(ans,1);
        }
    }
    else
    { 
        // Permutations made 
        for (int i = l; i <= r; i++) 
        { 
  
            // Swapping done 
            swap(a[l], a[i]); 
  
            // Recursion called 
            permute(a, l+1, r, goal , ans); 
  
            //backtrack 
            swap(a[l], a[i]); 
        } 
    } 
} 
  
// Driver Code 
int main() 
{ 
    
    string goal = "AchieveScoreabc"; 
    vector<string> a;

    a.push_back("Achieve");
    a.push_back("abcd");
    a.push_back("Score");
    int n = a.size(); 
    int ans=0;
    permute(a, 0, n-1,goal,ans); 
    cout<< ans; 
} 