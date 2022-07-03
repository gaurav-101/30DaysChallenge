//Method -2 Using three pointers
vector <int> commonElements (int a[], int b[], int c[], int n1, int n2, int n3)
        {
            int i=0,j=0,k=0;
            vector <int> ans;
            while(i<n1 and j<n2 and k<n3){
                if(a[i]==b[j] and b[j]==c[k]){
                    ans.push_back(a[i]);
                    i++;j++;k++;
                }
                else if( a[i]<b[j]) i++;
                else if( b[j]<c[k]) j++;
                else k++;
                int xx=a[i-1];
                while(a[i]==xx) i++;
                int yy=b[j-1];
                while(b[j]==yy) j++;
                int zz=c[k-1];
                while(c[k]==zz) k++;
            }
            
            return ans;
        }


//Method-1  Using map
vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
{
    vector <int> ans;
    unordered_map<int,int> m1,m2,m3;
    for(int i=0;i<n1;i++) m1[A[i]]++;
    for(int i=0;i<n2;i++) m2[B[i]]++;
    for(int i=0;i<n3;i++) m3[C[i]]++;
    for(int i=0;i<n1;i++){
        if(m1[A[i]] and m2[A[i]] and m3[A[i]]){
            ans.push_back(A[i]);
            m1[A[i]]=0;
        }
    }
    return ans;
}