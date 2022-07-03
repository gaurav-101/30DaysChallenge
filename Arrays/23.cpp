long long maxProduct(vector<int> arr, int n) {
    long long ans=INT_MIN;
    long long currentProduct=1;
    for(int i=0;i<n;i++){
        currentProduct*=arr[i];
        ans=max(ans,currentProduct);
        if(currentProduct==0){
            currentProduct=1;
        }
    }
    currentProduct=1;
    for(int i=n-1;i>=0;i--){
        currentProduct*=arr[i];
        ans=max(ans,currentProduct);
        if(currentProduct==0){
            currentProduct=1;
        }
    }
    
    return ans;
}



//My faulty way..
// #include <iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> arr{6,-3,-10,0,2};
//     cout<< maxProduct(arr,5);
// }

// int maxProduct(vector<int> arr, int n) {
//     int maxPro=arr[0];
//     int prevProduct=(int)arr[0], allProduct=(int)arr[0];
//     for(int i=1;i<n;i++){
        
//         if(prevProduct<=0){
//             prevProduct=arr[i];
            
//         }
//         else{
//             prevProduct*=arr[i];
//         }
//         if(prevProduct==0){
//             allProduct=arr[i];
//         }
//         else{
//             allProduct*=arr[i];
//         }
        
//         maxPro=max(prevProduct,maxPro,allProduct);
//     }
//     return maxPro;
// }