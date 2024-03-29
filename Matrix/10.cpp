// // { Driver Code Starts
// // kth largest element in a 2d array sorted row-wise and column-wise
// #include<iostream>
// #include<map>
// using namespace std;
// #define MAX 1000
// int mat[MAX][MAX];
// int kthSmallest(int mat[MAX][MAX], int n, int k);
// // driver program to test above function
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
    
//         for(int i=0;i<n;i++)
//             for(int j=0;j<n;j++)
//                 cin>>mat[i][j];
//         int r;
//         cin>>r;
//         cout<<kthSmallest(mat,n,r)<<endl;
//     }
//      // cout << "7th smallest element is " << kthSmallest(mat, 4, 7);
//       return 0;
// }
// // } Driver Code Ends



// int kthSmallest(int mat[MAX][MAX], int n, int k)
// {
//   map<int,int> m;
  
//   for(int i=0;i<n;i++){
//       m.insert(mat[i][0],i);
//   }
  
//   int ans;
//   while(k!=0){
//       auto itr = m.begin();
//       ans=itr->first;
//       m.erase(ans);
//       k--;
//   }
//   return ans;
// }



#include <iostream>
#include <map>
using namespace std;
#define MAX 1000
int mat[MAX][MAX];
int kthSmallest(int mat[MAX][MAX], int n, int k);
// driver program to test above function
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
    
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>mat[i][j];
        int r;
        cin>>r;
        cout<<kthSmallest(mat,n,r)<<endl;
    }
     // cout << "7th smallest element is " << kthSmallest(mat, 4, 7);
      return 0;
}
int kthSmallest(int mat[MAX][MAX], int n, int k)
{
  map<int,int> m;
  vector<int> colIdx;
  for(int i=0;i<n;i++){
      colIdx.push_back(0);
  }
  
  for(int row=0;row<n;row++){
      m.insert(mat[row][0],row);
  }
  
  int ans;
  while(k!=0){
      map<int, int>::iterator itr = m.begin();
      ans=itr->first;
      int row=itr->second;
      colIdx[row]+=1;
      m.erase(ans);
      int col=colIdx[row];
      int i=mat[row][col];
      m[i]=row;
      k--;
  }
  return ans;
}