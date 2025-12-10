class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        // Your code goes here
        vector<int> nums;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]>=0){
                nums.push_back(arr[i]);
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]<0){
                nums.push_back(arr[i]);
            }
        }
        arr=nums;
    }
};