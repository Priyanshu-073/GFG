// User function Template for C++
class Solution {
  public:
    int findCeil(vector<int>& arr, int x) {
        int lo=0;
        int hi=arr.size()-1;
        int ans=-1;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(arr[mid] < x){
                lo=mid+1;
            }else{
                ans=mid;
                hi=mid-1;
            }
        }
        return ans;
    }
};