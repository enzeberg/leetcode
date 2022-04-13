class Solution {
public:
    bool isValid(string s) {
        int sSize = s.size();
        // if (sSize == 0) return true;
        if (sSize % 2 != 0) return false;
        stack<char> charStack;
        for (int i = 0; i < sSize; ++i) {
            char c = s[i];
            if (c == '(' || c == '{' || c == '[') {
                charStack.push(c);
            } else {
                if (charStack.empty()) return false;
                char top = charStack.top();
                switch (c) {
                    case ')':
                        if (top != '(')
                            return false;
                        break;
                    case '}':
                        if (top != '{')
                            return false;
                        break;
                    default:
                        if (top != '[')
                            return false;
                        break;
                }
                charStack.pop();
            }
        }
        return charStack.empty();
    }
};