class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        int i=0;
        int j=0;
        // int k=0;
        int n1=a.size();
        int n2=b.size();
        vector<int> arr;
        
        while(i<n1 && j<n2){
        
            if(a[i]<b[j]){
                arr.push_back(a[i]);
                i++;
            }else{
                arr.push_back(b[j]);
                j++;
            }
            // k++;
        }
        
        while(i<n1){
            arr.push_back(a[i]);
            i++;
            // k++;
        }
        
        while(j<n2){
            arr.push_back(b[j]);
            j++;
            // k++;
        }
        arr.erase(unique(arr.begin(), arr.end()), arr.end());

        
        return arr;
    }
};