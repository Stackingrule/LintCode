class Solution {
public:
    /**
     * @param A: sorted integer array A
     * @param B: sorted integer array B
     * @return: A new sorted integer array
     */
    vector<int> mergeSortedArray(vector<int> &A, vector<int> &B) {
        // write your code here
        int i=0, j=0, index=0;
        vector<int> NewArray(A.size() + B.size());
        
        while(i < A.size() && j<B.size())
        {
            if(A[i] <= B[j])
            {
                NewArray[index++] = A[i++];
            }
            else
            NewArray[index++] = B[j++];
        }
        while(i < A.size())
        {
            NewArray[index++] = A[i++];
        }
        while(j < B.size())
        {
            NewArray[index++] = B[j++];
        }
    
        return NewArray;
    }
    
    
};