class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
    int n = arr.size();
    long long maxi = INT_MIN;
    long long sum = 0;
    for(int i=0;i<k;i++){
        sum = sum + arr[i];    
    }
    maxi = sum;
    int l=0;
    int r=k-1;
    while(r<n-1){
        sum = sum - arr[l];
        l++;
        r++;
        sum = sum + arr[r];
        maxi = max(sum,maxi);
    }
    return maxi;
    }
};