// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int m = n;
        int arg = 0;
        while(n>0){
            int ld = 0;
            ld = n%10;
            n=n/10;
            arg =arg + ld*ld*ld;
        }
        if(arg==m) return true;
        return false;

    }
};