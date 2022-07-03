// Method-2 
int nextGap(int gap)
{
    if (gap <= 1)
        return 0;
    return (gap / 2) + (gap % 2);
}
    
void merge(int arr1[], int arr2[], int n, int m) {
    int i, j, gap = n + m;
    for (gap = nextGap(gap); gap > 0; gap = nextGap(gap)){
        // comparing elements in the first array.
        for (i = 0; i + gap < n; i++)
            if (arr1[i] > arr1[i + gap])
                swap(arr1[i], arr1[i + gap]);
    
        // comparing elements in both arrays.
        for (j = gap > n ? gap - n : 0; i < n && j < m; i++, j++)
            if (arr1[i] > arr2[j])
                swap(arr1[i], arr2[j]);
    
        if (j < m) {
            // comparing elements in the second array.
            for (j = 0; j + gap < m; j++)
                if (arr2[j] > arr2[j + gap])
                    swap(arr2[j], arr2[j + gap]);
        }
    }
}

//Method-1 
void merge(int arr1[], int arr2[], int n, int m) {
    int ptr1=0,ptr2=0;
    while(ptr1!=n){
        
        if(arr1[ptr1]<arr2[ptr2]){
            ptr1++;
        }
        else{
            int temp=arr1[ptr1];
            arr1[ptr1]=arr2[ptr2];
            arr2[ptr2]=temp;
            ptr1++;
            sort(arr2,arr2+m);
        }
    }
}