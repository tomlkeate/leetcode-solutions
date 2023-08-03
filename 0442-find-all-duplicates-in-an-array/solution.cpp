class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        std::vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            int location = std::abs(nums[i]), value = nums[location - 1];
            if (value < 0)
                ans.push_back(location);
            nums[location - 1] = -value;
        }
        return ans;
    }
};
