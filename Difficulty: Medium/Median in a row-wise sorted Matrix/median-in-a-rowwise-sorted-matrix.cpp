class Solution {
  public:
    int median(vector<vector<int>> &mat) {
        // code here
        int n=mat.size();
        int m=mat[0].size();
        
        int r=n*m;
        vector<int> res;
        int k=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                res.push_back(mat[j][i]);
            }
        }
        sort(res.begin(),res.end());
        int med=(n*m)/2;
        
        return res[med];
    }
};
