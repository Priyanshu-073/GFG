class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        int n = arr.size();
        int mino = INT_MAX;
        int maxo = INT_MIN;
        for(int i=0;i<n;i++){
            mino=min(mino,arr[i]);
            maxo=max(maxo,arr[i]);
        }
        return {mino,maxo};
    }
};