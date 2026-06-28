class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<char> st;
        if (s.empty())
            return false;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[')
                st.push(c);
            else {
                if (st.empty())
                    return false;
                char ch = st.top();
                if ((ch == '(' && c == ')') || (ch == '{' && c == '}') ||
                    ((ch == '[' && c == ']')))
                    st.pop();
                else
                    return false;
            }
        }
        return st.empty();
    }
};