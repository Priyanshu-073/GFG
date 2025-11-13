class Solution {
  public:
    void rearrange(vector<int>& arr) {
        // Your code here
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int mid=(n+1)/2;
        vector<int> left(arr.begin(),arr.begin()+mid);
        vector<int> right(arr.begin()+mid,arr.end());
        reverse(right.begin(),right.end());
        int i =0,j=0,k=0;
        while(i<n){
            if(j<right.size()){
                arr[i++] = right[j++];
            }
            if(i<n && k<left.size()){
                arr[i++] = left[k++];
            }
        }
    }
};