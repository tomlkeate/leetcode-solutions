class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> hashMap;
        for (int i = 0; i < nums.size(); i++) {
            int candidate = target - nums[i];
            if (hashMap.count(candidate)) {
                std::vector<int> ans{hashMap[candidate], i};
                return ans;
            }
            hashMap[nums[i]] = i;
        }
        return nums;
    }
};
