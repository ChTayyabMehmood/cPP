//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution {
  public:
    int floorSqrt(int n) {
        // Your code goes here
                
        int low = 0, high = n;  // Initialize low to 0
        int ans = 0;  // Store the floor value
        
        while (low <= high) {
            long long mid = (low + high) / 2;
            long long val = mid * mid;
            
            if (val == n) {
                return mid;  // Perfect square case
            } 
            else if (val < n) {
                ans = mid;  // Store possible floor value
                low = mid + 1;
            } 
            else {
                high = mid - 1;
            }
        }
        
        return ans;  // Return the largest integer whose square is ≤ n

        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;
        cout << obj.floorSqrt(n) << endl;
    }
    return 0;
}

// } Driver Code Ends