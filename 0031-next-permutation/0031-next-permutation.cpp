class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        int index = -1;
        int n = nums.size();

        // Step 1: Find the first decreasing element from the right
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                index = i;
                break;
            }
        }

        // Step 2: If no such index exists, reverse the entire array
        if (index == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // Step 3: Find the next larger element from the end
        for (int i = n - 1; i > index; i--) {
            if (nums[i] > nums[index]) {
                swap(nums[i], nums[index]);
                break;
            }
        }

        // Step 4: Reverse the elements to the right of the index
        reverse(nums.begin() + index + 1, nums.end());
    }
};
