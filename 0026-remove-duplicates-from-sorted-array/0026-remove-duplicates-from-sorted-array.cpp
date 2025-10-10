class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int n = nums.size();
        int x = 0;

        for (int i = 0; i < n; i++) {

            if (nums[i] > nums[x]) {
                x = x + 1;
                nums[x] = nums[i];
            }
        }

        return x + 1;
    }
};