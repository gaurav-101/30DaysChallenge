#include <iostream>
using namespace std;
 
int palindrome(char arr[], int n)
{
    // Initialise flag to zero.
    int ans = 1;
 
    // Loop till array size n/2.
    for (int i = 0; i <= n / 2 && n != 0; i++) {
 
        // Check if first and last element are different
        // Then set flag to 1.
        if (arr[i] != arr[n - i - 1]) {
            ans = 0;
            break;
        }
    }
 
    return ans;
}
 
// Driver code.
int main()
{
    int arr[] = { 1, 2, 3, 2, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    cout<<palindrome(arr, n);
    return 0;
}