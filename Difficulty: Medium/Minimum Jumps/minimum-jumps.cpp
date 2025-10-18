class Solution {
  public:
    int minJumps(vector<int>& arr) {
        // code here
        int n = arr.size();
        if(arr[0] == 0){
            return -1;
        }
        if(n<=1){
            return 0;
        }
        int maxR=0;
        int jump=0;
        int last=0;
        for(int i=0;i<n;i++){
            maxR=max(maxR,i+arr[i]);
            if(i == last){
                
            if(i == maxR){
                jump=-1;
                break;
            }
            last = maxR;
            jump++;
            if(maxR>=n-1){
                break;
            }
            }
        }
        return jump;
    }
};
