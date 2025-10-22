class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        int n = a.size();
        int m = b.size();
        int i=0;
        int j=0;
        vector<int> merged;
        while(i<n && j<m){
            if(a[i] <= b[j] ){
                merged.push_back(a[i++]);
            }else{
                merged.push_back(b[j++]);
            }
        }
        while(i<n){
            merged.push_back(a[i++]);
        }
        while(j<m){
            merged.push_back(b[j++]);
        }
        for(int k=0;k<n;k++){
            a[k] = merged[k];
        }
        for(int k=0;k<m;k++){
            b[k] = merged[n+k];
        }

    }
};