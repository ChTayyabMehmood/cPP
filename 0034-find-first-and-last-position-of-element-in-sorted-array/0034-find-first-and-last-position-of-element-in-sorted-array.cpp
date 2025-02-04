class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       
        int low=0,high=nums.size() - 1;
        vector <int> ans ;
        int first=-1,last=-1;
        int mid;
        while(low<=high){
            
            mid=(low+high)/2;

            if(nums[mid]==target){
                high=mid-1;
                first = mid;

            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else 
                high=mid-1;

        }

        if(first ==-1){ ans.push_back(-1); ans.push_back(-1); return ans;}

        low=0, high=nums.size()-1;

        while(low<=high){

            mid=(low+high)/2;

            if(nums[mid]==target){
                last = mid;
                low=mid+1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else 
            high=mid-1;
        }


        
        
 ans.push_back(first);
 ans.push_back(last);

 return ans;


    }
};