class Solution {
  public:
    void merge(vector<int>& arr,int s,int m,int e){
        int l = s;
        int r = m+1;
        int idx = 0;
        vector<int> temp(e-s+1);
        while(l <= m && r<=e){
            if(arr[l] < arr[r]){
                temp[idx] = arr[l];
                l++;
            }else{
                temp[idx] = arr[r];
                r++;
            }
            idx++;
        }
        while(l <= m){
            temp[idx] = arr[l];
            l++;
            idx++;
        }
        while(r<=e){
            temp[idx] = arr[r];
            r++;
            idx++;
        }
        idx=0;
        while(s<=e){
            arr[s] = temp[idx];
            s++;
            idx++;
        }
    } 
    void mergeSort(vector<int>& arr, int l, int r) {
        // code here
        if(l == r){
            return ;
        }
        int mid = (l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
};