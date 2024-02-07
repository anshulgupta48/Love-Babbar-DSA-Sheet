// ******** Given an array of N integers arr[] where each element represents the maximum length of the jump that can be made forward from that element. This means if arr[i] = x, then we can jump any distance y such that y ≤ x. Find the minimum number of jumps to reach the end of the array (starting from the first element). If an element is 0, then you cannot move through that element. ********

// <======== Example ========>
// Input: N = 11, arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9} 
// Output: 3

// Input: N = 6, arr = {1, 4, 3, 2, 6, 7}
// Output: 2


// Expected Time Complexity ==> O(N)
// Expected Auxiliary Space ==> O(1)




class Solution{
  public:
    int minJumps(int arr[], int n) {
        int jump = 0;
        int start = 0;
        int end = 0;
        
        for(int i = 0; i < n-1; i++) {
            end = max(end, arr[i]+i);
            if(start == i) {
                start = end;
                jump++;
            }
        }
        
        if(start < n-1) {
            return -1;
        }
        
        return jump;
    }
};