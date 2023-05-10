class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> results;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            if (results.count(nums[i])) {
                return true;
            } else {
                results[nums[i]] = 1;
            }
        }
        return false;
    }
};
