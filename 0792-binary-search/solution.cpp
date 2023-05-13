class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1, middle = (end - start) / 2;
        while (start <= end) {
            middle = start + ((end - start) / 2);
            if (nums[middle] == target)
                return middle;
            else if (target > nums[middle])
                start = middle + 1;
            else
                end = middle - 1;
        }
        return -1;
    }
};
