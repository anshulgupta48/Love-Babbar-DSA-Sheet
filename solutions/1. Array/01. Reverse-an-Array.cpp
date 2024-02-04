// ******** Array reverse or reverse a array means changing the position of each number of the given array to its opposite position from end, i.e. if a number is at position 1 then its new position will be Array.length, similarly if a number is at position 2 then its new position will be Array.length – 1, and so on. ********

// <======== Example ========>
// Input: N = 3, A[] = {1, 2, 3}
// Output: A[] = {3, 2, 1}


// Expected Time Complexity ==> O(N)
// Expected Auxiliary Space ==> O(1)




void reverseArray(int A[], int n) {
    for(int i = 0; i < n/2; i++) {
        swap(A[i], A[n-i-1]);
    }
}