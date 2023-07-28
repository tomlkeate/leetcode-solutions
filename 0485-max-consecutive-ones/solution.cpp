class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0, maxCount = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                count++;
                if (count > maxCount)
                 maxCount = count;
                continue;
            }
            count = 0;
        }
        return maxCount;
    }
};
