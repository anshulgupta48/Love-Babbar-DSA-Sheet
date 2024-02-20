// ******** Given an array arr[] denoting heights of N towers and a positive integer K. For each tower, you must perform exactly one of the following operations exactly once. Increase the height of the tower by K, Decrease the height of the tower by K. Find out the minimum possible difference between the height of the shortest and tallest towers after you have modified each tower. ********

// <======== Example ========>
// Input: K = 2, N = 4, Arr[] = {1, 5, 8, 10}
// Output: 5

// Input: K = 3, N = 5, Arr[] = {3, 9, 12, 16, 20}
// Output: 11


// Expected Time Complexity ==> O(N*logN)
// Expected Auxiliary Space ==> O(N)




class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        sort(arr, arr+n);
        int maxi = arr[n-1];
        int mini = arr[0];
        int ans = maxi - mini;
        
        for(int i = 1; i < n; i++) {
            if(arr[i]-k < 0) {
                continue;
            }
            
            maxi = max(arr[i-1]+k, arr[n-1]-k);
            mini = min(arr[0]+k, arr[i]-k);
            
            ans = min(ans, maxi-mini);
        }
        
        return ans;
    }
};