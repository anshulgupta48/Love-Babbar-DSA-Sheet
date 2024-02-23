// ******** Given an array Arr[] that contains N integers (may be positive, negative or zero). Find the product of the maximum product subarray. ********

// <======== Example ========>
// Input: N = 5, Arr[] = {6, -3, -10, 0, 2}
// Output: 180

// Input: N = 6, Arr[] = {2, 3, 4, 5, -1, 0}
// Output: 120


// Expected Time Complexity ==> O(N)
// Expected Auxiliary Space ==> O(1)




class Solution{
public:
	long long maxProduct(vector<int> arr, int n) {
	    long long val1 = 1;
	    long long val2 = 1;
	    long long ans = INT_MIN;
	    
	    for(int i = 0; i < n; i++) {
	        val1 *= arr[i];
	        val2 *= arr[n-i-1];
	        ans = max(ans, max(val1, val2));
	        
	        if(val1 == 0) {
	            val1 = 1;
	        }
	        if(val2 == 0) {
	            val2 = 1;
	        }
	    }
	    
	    return ans;
	}
};