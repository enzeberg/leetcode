class Solution {
public:
    int minIncrementForUnique(vector<int> &A)
    {
        sort(A.begin(), A.end());
        int size = A.size();
        int result = 0;
        int newEle;
        for (int i = 1; i < size; ++i)
        {
            if (A[i] <= A[i - 1])
            {
                newEle = A[i - 1] + 1;
                result += newEle - A[i];
                A[i] = newEle;
            }
        }
        return result;
    }
};