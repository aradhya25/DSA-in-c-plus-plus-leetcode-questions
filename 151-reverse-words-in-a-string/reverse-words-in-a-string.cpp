class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word, result;

        while (ss >> word) {
            result = word + " " + result;
        }

        result.pop_back();   // remove last space
        return result;
    }
};
