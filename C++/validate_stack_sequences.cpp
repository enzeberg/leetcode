class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        if (pushed.size() == 0) return true;
        int lastPopped;
        for (int i = 0; i < pushed.size(); ++i) {
            if (pushed[i] == popped[0]) {
                lastPopped = i;
                break;
            }
        }
        pushed.erase(pushed.begin() + lastPopped);
        const int poppedSize = popped.size();
        for (int i = 1; i < poppedSize; ++i) {
            const int pushedSize = pushed.size();
            for (int j = 0; j < pushedSize; ++j) {
                if (pushed[j] == popped[i]) {
                    if (lastPopped - j > 1) {
                        return false;
                    }
                    lastPopped = j;
                    break;
                }
            }
            pushed.erase(pushed.begin() + lastPopped);
        }
        return true;
    }
};