// ******** Given an array of integers. Find if there is a subarray (of size at-least one) with 0 sum. You just need to return true/false depending upon whether there is a subarray present with 0-sum or not. Printing will be taken care by the driver code. ********

// <======== Example ========>
// Input: n = 5, arr = {4,2,-3,1,6}
// Output: Yes

// Input: n = 5, arr = {4,2,0,1,6}
// Output: Yes


// Expected Time Complexity ==> O(N)
// Expected Auxiliary Space ==> O(N)




class Solution{
public:
	bool subArrayExists(int arr[], int n) {
        unordered_map<int, int> mp;
        int sum = 0;
        mp[0] = 1;
        
        for(int i = 0; i < n; i++) {
            sum += arr[i];
            if(mp.find(sum) != mp.end()) {
                return true;
            }
            
            mp[sum]++;
        }
        
        return false;
    }
};