// ******** Given an array of N integers, and an integer K, find the number of pairs of elements in the array whose sum is equal to K. ********

// <======== Example ========>
// Input: N = 4, K = 6, arr[] = {1, 5, 7, 1}
// Output: 2

// Input: N = 4, K = 2, arr[] = {1, 1, 1, 1}
// Output: 6


// Expected Time Complexity ==> O(N)
// Expected Auxiliary Space ==> O(N)




class Solution {
public:
    int getPairsCount(int arr[], int n, int k) {
        int count = 0;
        unordered_map<int, int> mp;
        
        for(int i = 0; i < n; i++) {
            int temp = k-arr[i];
            if(mp[temp]) {
                count += mp[temp];
            }
            
            mp[arr[i]]++;
        }
        
        return count;
    }
};