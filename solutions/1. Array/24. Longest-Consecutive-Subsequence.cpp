// ******** Given an array of positive integers. Find the length of the longest sub-sequence such that elements in the subsequence are consecutive integers, the consecutive numbers can be in any order. ********

// <======== Example ========>
// Input: N = 7, a[] = {2,6,1,9,4,5,3}
// Output: 6

// Input: N = 7, a[] = {1,9,3,10,4,20,2}
// Output: 4


// Expected Time Complexity ==> O(N)
// Expected Auxiliary Space ==> O(1)




class Solution{
public:
	int findLongestConseqSubseq(int arr[], int N) {
        sort(arr, arr+N);
        int maxCount = 0;
        int count = 1;
        
        if(N == 1) {
            return 1;
        }
        
        for(int i = 1; i < N; i++) {
            if(arr[i-1]+1 == arr[i]) {
                count++;
            }
            else if(arr[i-1] == arr[i]) {
                continue;
            }
            else {
                count = 1;
            }
            
            maxCount = max(maxCount, count);
        }
        
        return maxCount;
    }
};