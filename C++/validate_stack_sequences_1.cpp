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
        for (int i = 1; i < popped.size(); ++i) {
            bool found = false;
            int start = lastPopped - 1;
            if (start < 0) {
                start = 0;
            }
            for (int j = start; j < pushed.size(); ++j) {
                if (pushed[j] == popped[i]) {
                    lastPopped = j;
                    found = true;
                    break;
                }
            }
            if (!found) {
                return false;
            } 

            pushed.erase(pushed.begin() + lastPopped);
        }
        return true;
    }
};