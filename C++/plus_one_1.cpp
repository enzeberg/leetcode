class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        const int size = digits.size();
        vector<int> result(size);
        int i = size - 1;
        bool c = false;
        if (digits[i] == 9) {
            result[i] = 0;
            c = true;
        } else {
            result[i] = digits[i] + 1;
        }
        --i;
        
        for (; i >= 0; --i) {
            if (c) {
                if (digits[i] < 9) {
                    result[i] = digits[i] + 1;
                    c = false;
                } else {
                    result[i] = 0;
                    c = true;
                }
            } else {
                result[i] = digits[i];
            }
        }

        if (c) result.insert(result.begin(), 1);

        return result;
    }
};