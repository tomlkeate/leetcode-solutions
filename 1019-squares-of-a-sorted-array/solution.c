/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize){
    *returnSize = numsSize;
    if (nums[0] >= 0) {
        for (int i = 0; i < numsSize; i++) {
            nums[i] = nums[i] * nums[i];
        }
        return nums;
    }
    int leftPtr = 0;
    int rightPtr = numsSize-1;
    int index = rightPtr;
    int * ans = calloc(numsSize, sizeof(int));
    while (leftPtr <= rightPtr) {
        int leftVal = nums[leftPtr];
        if (nums[leftPtr] < 0) {
            leftVal = -1 * nums[leftPtr];
        }
        if (leftVal >= nums[rightPtr]) {
            ans[index] = leftVal * leftVal;
            leftPtr++;
        } else {
            ans[index] = nums[rightPtr] * nums[rightPtr];
            rightPtr--;
        }
        index--;
    }
    return ans;
}
