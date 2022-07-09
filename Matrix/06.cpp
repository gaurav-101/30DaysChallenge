 int largestRectangleArea(int* heights, int n) {
      stack < int > st;
      int leftsmall[n], rightsmall[n];
      for (int i = 0; i < n; i++) {
        while (!st.empty() && heights[st.top()] >= heights[i]) {
          st.pop();
        }
        if (st.empty())
          leftsmall[i] = 0;
        else
          leftsmall[i] = st.top() + 1;
        st.push(i);
      }
      // clear the stack to be re-used
      while (!st.empty())
        st.pop();

      for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && heights[st.top()] >= heights[i])
          st.pop();

        if (st.empty())
          rightsmall[i] = n - 1;
        else
          rightsmall[i] = st.top() - 1;

        st.push(i);
      }
      int maxA = 0;
      for (int i = 0; i < n; i++) {
        maxA = max(maxA, heights[i] * (rightsmall[i] - leftsmall[i] + 1));
      }
      return maxA;
    }
    
    int maxArea(int M[MAX][MAX], int n, int m) {
        int *heights = new int(m);
        int ans=INT_MIN;
        int temp;
        for(int i=0; i<m; i++){
            heights[i]=0;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(M[i][j]==0){
                    heights[j]=0;
                }
                else{
                    heights[j]++;
                }
            }
            temp=largestRectangleArea(heights, m);
            ans=max(ans,temp);
        }
        return ans;
    }
};