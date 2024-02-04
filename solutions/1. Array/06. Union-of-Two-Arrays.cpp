// ******** Given two arrays a[] and b[] of size n and m respectively. The task is to find the number of elements in the union between these two arrays. Union of the two arrays can be defined as the set containing distinct elements from both the arrays. If there are repetitions, then only one occurrence of element should be printed in the union. ********

// <======== Example ========>
// Input: 5 3, 1 2 3 4 5, 1 2 3
// Output: 5

// Input: 6 2, 85 25 1 32 54, 85 2 
// Output: 7


// Expected Time Complexity ==> O(n+m)
// Expected Auxiliary Space ==> O(n+m)




class Solution {
    public:
    int doUnion(int a[], int n, int b[], int m) {
        set<int> s;
        for(int i = 0; i < n; i++) {
            s.insert(a[i]);
        }
        
        for(int i = 0; i < m; i++) {
            s.insert(b[i]);
        }
        
        return s.size();
    }
};