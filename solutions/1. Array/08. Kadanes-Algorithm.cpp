// ******** Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number) which has the maximum sum and return its sum. ********

// <======== Example ========>
// Input: N = 5, Arr[] = {1,2,3,-2,5}
// Output: 9

// Input: N = 4, Arr[] = {-1,-2,-3,-4}
// Output: -1


// Expected Time Complexity ==> O(N)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    long long maxSubarraySum(int arr[], int n){
        long long maxSum = arr[0];
        long long sum = arr[0];
        
        for(int i = 1; i < n; i++) {
            if(sum > 0) {
                sum += arr[i];
            }
            else {
                sum = arr[i];
            }
            
            if(sum > maxSum) {
                maxSum = sum;
            }
        }
        
        return maxSum;
    }
};