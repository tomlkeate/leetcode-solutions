/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int * solution = malloc(2 * sizeof(target));
    *returnSize = 2;
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (i != j && target - nums[i] == nums[j]) {
                solution[0] = i;
                solution[1] = j;
                return solution;
            }
        }
    }
    return solution;
}
