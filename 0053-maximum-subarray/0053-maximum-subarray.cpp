class Solution {
public:
    int maxSubArray(vector<int>& nums) {
         int MaxSum=INT_MIN,currSum = 0;

        for(int val : nums){
        currSum += val;

        MaxSum= max(currSum,MaxSum);
        if(currSum < 0)
        currSum = 0;
        }

    return MaxSum;
    }
};