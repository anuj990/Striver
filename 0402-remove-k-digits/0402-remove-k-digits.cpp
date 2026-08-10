class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;

        for (char c : num) {
            while (k > 0 && !st.empty() && st.top() > c) {
                k--;
                st.pop();
            }
            st.push(c);
        }

        while (!st.empty() && k > 0) {
            st.pop();
            k--;
        }

        if (st.empty()) {
            return "0";
        }

        string res = "";

        while (!st.empty()) {
            res.push_back(st.top());
            st.pop();
        }

       ranges::reverse(res);

        
        int i = 0;
        while (i < res.size() && res[i] == '0') {
            i++;
        }

        res = res.substr(i);

        return res.empty() ? "0" : res;
    }
};