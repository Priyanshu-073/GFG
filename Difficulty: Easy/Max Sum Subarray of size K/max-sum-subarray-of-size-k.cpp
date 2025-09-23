class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
    //     int max=0;
    //     int n = arr.size();
    //     int sum =0;
    //     for(int i=0;i<=n-k;i++){
    //         int sum=0;
    //         int j=i;
    //         while(j<i+k){
    //             sum = sum+arr[j];
    //             j++;
    //         }
    //         if(sum > max){
    //             max=sum;
    //         }
    //     }
    // return max;
    int n = arr.size();
    int sum=0;
    for(int i=0;i<k;i++){
        sum = sum + arr[i];
    }
    int maxi = sum;
    for(int i =k ;i<n;i++){
        sum = sum - arr[i-k] + arr[i];
        maxi = max(maxi,sum);
    }
    return maxi;
    }
};