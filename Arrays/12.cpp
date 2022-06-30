

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