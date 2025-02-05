//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int findKRotation(vector<int> &nums) {
     
     
      int low=0,high=nums.size()-1;
    int ans=nums[0],mid=0;
    int index=0;

    while(low<=high){

        mid=(low+high)/2;

        if(nums[low]<=nums[mid]){
            
            if(ans>nums[low]){
                ans=nums[low];
                index=low;
            }
            low=mid+1;
        }
        else { 

            if(ans>nums[mid]){
                ans=nums[mid];
                index=mid;
            }
            high=mid-1;
        }


    }
    
return index;
     
     
     
     
     
        // Code Here
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        Solution ob;
        int res = ob.findKRotation(arr);
        cout << res << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends