class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int maxSum = 0;
        for (int i = 0; i < k; i++) {
            maxSum += nums[i];
        }
        int prevSum = maxSum;
        for (int j = k; j < nums.size(); j++) {
            prevSum = prevSum - nums[j - k] + nums[j];
            if (prevSum > maxSum) {
                maxSum = prevSum;
            }
        }
        return maxSum / (double) k;
    }
};
