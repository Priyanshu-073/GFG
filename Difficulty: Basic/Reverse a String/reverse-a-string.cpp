// User function Template for C++
class Solution {
  public:
    string reverseString(string& s) {
        // code here
        int n = s.size();
        string s1 = "";
        for (int i = n - 1; i >= 0; i--) {
            s1 += s[i];
        }
        return s1;
    }
};
