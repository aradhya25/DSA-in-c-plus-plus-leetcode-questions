class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;

        for (int i = 0; i < num.size(); i++) {
            while (!st.empty() && k > 0 && st.top() > num[i]) {
                st.pop();
                k--;
            }
            st.push(num[i]);
        }

        while (!st.empty() && k > 0) {
            st.pop();
            k--;
        }

        string ans = "";

        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        // Remove leading zeros
        while (ans.size() > 0 && ans[0] == '0') {
            ans.erase(ans.begin());
        }

        if (ans.empty()) {
            return "0";
        }

        return ans;
    }
};