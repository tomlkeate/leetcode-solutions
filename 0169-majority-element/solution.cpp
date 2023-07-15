class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::unordered_map<int, int> hashMap;
        for (int i = 0; i < nums.size(); i++) {
            if (hashMap.count(nums[i])) {
                hashMap[nums[i]] += 1;
            } else {
                hashMap[nums[i]] = 1;
            }
            if (hashMap[nums[i]] > (int) (nums.size()/2)) {
                return nums[i];
            }
        }
        return -1;
    }
};
