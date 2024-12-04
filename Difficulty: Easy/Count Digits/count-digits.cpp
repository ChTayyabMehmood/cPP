//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        
        int ActualNo=n,count=0;
        
        
        while(n>0){
            int digit = n%10;
            
            if(digit !=0 && ActualNo % digit == 0){
                count ++;
            }
            
            n=n/10;
            
        }
        
        return count;
        
        
        
        
        
        
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends