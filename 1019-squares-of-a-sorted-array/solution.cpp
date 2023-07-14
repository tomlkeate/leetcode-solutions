class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        std::vector<int> ans(nums.size());
        int i = 0, j = nums.size()-1, index = nums.size()-1;
        while (i <= j) {
            if (abs(nums[i]) >= abs(nums[j])) {
                ans[index] = pow(nums[i],2);
                i++;
            } else {
                ans[index] = pow(nums[j],2);
                j--;
            }
            index--;
        }
        return ans;
    }
};
