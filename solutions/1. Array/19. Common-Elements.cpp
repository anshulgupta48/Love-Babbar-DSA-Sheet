// ******** Given three arrays sorted in increasing order. Find the elements that are common in all three arrays. ********

// <======== Example ========>
// Input: n1 = 6; A = {1, 5, 10, 20, 40, 80}, n2 = 5; B = {6, 7, 20, 80, 100}, n3 = 8; C = {3, 4, 15, 20, 30, 70, 80, 120}
// Output: 20 80


// Expected Time Complexity ==> O(n1 + n2 + n3)
// Expected Auxiliary Space ==> O(n1 + n2 + n3)




class Solution {
public:
    vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3) {
        vector<int> ans;
        int i = 0, j = 0; k = 0;
           
        while(i<n1 && j<n2 && k<n3) {
            if(A[i]==B[j] && B[j]==C[k]) {
                if(ans.size() == 0 || ans.back() != A[i]) {
                    ans.push_back(A[i]);
                    i++;
                    j++;
                    k++;
                }
            }
            else if(A[i] <= B[j] && A[i] <= C[k]) {
                i++;
            }
            else if(B[j] <= A[i] && B[j] <= C[k]) {
                j++;
            }
            else if(C[k] <= A[i] && C[k] <= B[j]) {
                k++;
            }
        }
           
        return ans;
    }
};