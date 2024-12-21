//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // Function to find pair with maximum sum
    int pairWithMaxSum(vector<int> &nums) {
        
        
          if (nums.size() < 2) return 0; // No adjacent pair exists
        
        int MaxSum = INT_MIN;

        for (int i = 0; i < nums.size() - 1; i++) {
            int pairSum = nums[i] + nums[i + 1];  // Sum of adjacent elements
            MaxSum = max(MaxSum, pairSum);       // Update maximum sum
        }

        return MaxSum;
        
        
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        cout << ob.pairWithMaxSum(nums) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends