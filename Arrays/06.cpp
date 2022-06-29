//Intersection of two arrays
public void intersectionOfTwoUnSortedArray(int[] arr1, int[] arr2, Set<Integer> finalIntersection) {
    int i = 0;
    int j = 0;
    Set<Integer> tempSet = new HashSet<>();

    while (i < arr1.length) {
      tempSet.add(arr1[i++]);
    }

    while (j < arr2.length) {
      if (tempSet.contains(arr2[j])) {
        finalIntersection.add(arr2[j]);
      }

      j++;
    }



//Union of two Arrays

int doUnion(int a[], int n, int b[], int m)  {
        set<int> s;
      
      for(int i=0;i<n;i++)
        s.insert(a[i]);
      for(int i=0;i<m;i++)
        s.insert(b[i]);
       
      return s.size();
   
        
    }