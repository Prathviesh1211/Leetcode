class Solution {
public:
    string reverseParentheses(string s) {
        stack<char> st;
        string str = "";
        for (char c : s) {
            if (c == ')') {
                string temp = "";
                while (!st.empty() && st.top() != '(') {
                    temp += st.top();
                    st.pop();
                }

                if (!st.empty())
                    st.pop();
                for (auto c : temp)
                    st.push(c);
            } else {
                st.push(c);
            }
        }
        while (!st.empty()) {
            str += st.top();
            st.pop();
        }
        reverse(str.begin(), str.end());
        return str;
    }
};