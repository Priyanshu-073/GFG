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
            if(i>0 && a[i-1] == a[i]){
                i++;
                continue;
            }
            if(j>0 && b[j-1] == b[j]){
                j++;
                continue;
            }
        
            if(a[i]<b[j]){
                arr.push_back(a[i]);
                i++;
            }else if(a[i]>b[j]){
                arr.push_back(b[j]);
                j++;
            }else{
                arr.push_back(a[i]);
            i++;
            j++;
            }
        }
        while(i<n1){
             if(i>0 && a[i-1] == a[i]){
                i++;
                continue;
            }
            arr.push_back(a[i]);
            i++;
        }
        while(j<n2){
             if(j>0 && b[j-1] == b[j]){
                j++;
                continue;
            }
            arr.push_back(b[j]);
            j++;
        }
        
        return arr;
    }
};