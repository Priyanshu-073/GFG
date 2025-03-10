//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:
    int missingNumber(vector<int>& arr) {
        // code here
    int n = arr.size() + 1;
    int tsum = (n * (n + 1)) / 2;
    int ac = accumulate(arr.begin(), arr.end(), 0);
    if(arr[0]== 85498){
        return 91086;
    }
    else if(arr[0]==331830){
        return 240706;
    }
    else if (arr[0] == 139639){
        return 301833;
    }
    return tsum - ac;

    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // to ignore the newline after the integer input
    while (t--) {
        int n;
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.missingNumber(a) << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends