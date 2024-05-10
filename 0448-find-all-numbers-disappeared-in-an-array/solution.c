/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    int i;
    for (i = 0; i < numsSize; i++) {
        nums[abs(nums[i]) - 1] = -abs(nums[abs(nums[i]) - 1]);
    }
    *returnSize = 0;
    for (i = 0; i < numsSize; i++) {
        if (nums[i] > 0)
            nums[(*returnSize)++] = i + 1;
    }
    return nums;
}
