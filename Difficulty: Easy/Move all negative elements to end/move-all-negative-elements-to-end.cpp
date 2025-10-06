class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        // Your code goes here
        // int n = arr.size();
        // int pos=0;
        // int hi = n-1;
        // for(int i=0;i<n;i++){
        //     if(arr[i] >= 0){
        //         if(i != pos){
        //             swap(arr[i],arr[pos]);
        //         }
        //         pos++;
        //     }
        // }
        // int n =arr.size();
        // vector<int> nums;
        // for(int i=0;i<n;i++){
        //     if(arr[i] > 0){
        //         nums.push_back(arr[i]);
        //     }
        // }
        // for(int i=0;i<n;i++){
        //     if(arr[i]<0){
        //         nums.push_back(arr[i]);
        //     }
        // }
        // arr=nums;
         int n = arr.size();
        vector<int> nums;  // start empty

        // first store non-negative numbers
        for (int i = 0; i < n; i++) {
            if (arr[i] >= 0) {
                nums.push_back(arr[i]);
            }
        }

        // then store negatives
        for (int i = 0; i < n; i++) {
            if (arr[i] < 0) {
                nums.push_back(arr[i]);
            }
        }

        arr = nums;

        
    }
};