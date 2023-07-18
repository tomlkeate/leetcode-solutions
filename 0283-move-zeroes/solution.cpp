class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    if (nums.size() <= 1) {
        return;
    }
    int lastNumIndex = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            nums[lastNumIndex] = nums[i];
            lastNumIndex++;
        }
    }
    for (; lastNumIndex < nums.size(); lastNumIndex++) {
        nums[lastNumIndex] = 0;
    }
    }
};
