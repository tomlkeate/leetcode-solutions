class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        std::vector<int> result(nums.size());
        int prefix = 1;
        for (int i = 0; i < nums.size(); i++) {
            result[i] = prefix;
            prefix = prefix * nums[i];
        }
        prefix = 1;
        for (int i = nums.size()-1; i >= 0; i--) {
            result[i] = prefix * result[i];
            prefix = nums[i] * prefix;
        }

        return result;
    }
};
