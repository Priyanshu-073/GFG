class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int n = arr.size();
        int res = arr[0];
        int curSum = arr[0];
        for(int i=1;i<n;i++){
            curSum = max(arr[i],curSum + arr[i]);
            res = max(res,curSum);
        }
        return res;
    }
};