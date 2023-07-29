/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize){
    *returnSize = numsSize;
    int runningSum = 0;
    for (int i = 0; i < numsSize; i++) {
        runningSum += nums[i];
        nums[i] = runningSum;
    }
    return nums;
}
