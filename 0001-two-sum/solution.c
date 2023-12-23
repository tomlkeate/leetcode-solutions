/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int * solution = malloc(2 * sizeof(int));
    int i = 0, j = 0;
    *returnSize = 2;
    for (; i < numsSize - 1; i++) {
        for (j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                solution[0] = i;
                solution[1] = j;
                return solution;
            }
        }
    }
    return solution;
}
