class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int freq = 0;

        for (int i = 0; i < n; i++) {
            freq = 0;
            for (int j = 0; j < n; j++) {
                if (nums[i] == nums[j]) {
                    freq++;
                }
            }
            if (freq == 1) {
                return nums[i]; 
            }
        } return -1;
    }
};
