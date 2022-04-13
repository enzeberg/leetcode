class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> result;
        const int size = digits.size();
        int i = 0;
        for (; i < size; ++i) {
            result.push_back(digits[i]);
        }
        
        i = size - 1;
        bool c = false;
        if (result[i] == 9) {
            result[i] = 0;
            c = true;
            --i;
        } else {
            ++result[i];
        }
        for (; i >= 0 && c ; --i) {
            if (result[i] < 9) {
                ++result[i];
                c = false;
            } else {
                result[i] = 0;
                c = true;
            }
        }

        if (c) result.insert(result.begin(), 1);

        return result;
    }
};