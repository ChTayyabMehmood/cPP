//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
    int midNth(int n,int m,int mid){
        long long ans=1;
        for(int i=1;i<=n;i++){
            ans=ans*mid;
    }  
    if(ans==m) return 1;
    if(ans>m) return 2;
    return 0;
}
    
    int nthRoot(int n, int m) {
        // Code here.
        
        int low=1,high=m;
        
        while(low<=high){
            
            int mid=(low+high)/2;
            
            int midN=midNth(n,m,mid);
            
            if(midN==1) return mid;
            else if(midN==2) {
                high=mid-1;
            }
            else 
            low=mid+1;
            
        
            
            
            
        }
        
        
        
          return -1;
        
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        Solution ob;
        int ans = ob.nthRoot(n, m);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends