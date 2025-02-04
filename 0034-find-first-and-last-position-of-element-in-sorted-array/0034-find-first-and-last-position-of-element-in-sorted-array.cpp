class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int low =0,high=nums.size()-1;

         vector <int> res;

        auto lb = lower_bound(nums.begin(), nums.end(), target); // First element >= key
        auto ub = upper_bound(nums.begin(), nums.end(), target); // First element > key it return iterator 

int start = lb-nums.begin(), end=ub-nums.begin()-1;



        if(start==nums.size() || nums[start] != target){

         res.push_back(-1);
         res.push_back(-1);
         return res;

        }

       

        res.push_back(start);
        res.push_back(end );

        return res;

    }
};