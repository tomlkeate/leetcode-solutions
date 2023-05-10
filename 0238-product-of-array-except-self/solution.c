/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize){
    int * result = malloc(numsSize * sizeof(int));
    result[0] = 1;
    (*returnSize) = numsSize;
    for (int i = 1; i < numsSize; i++) {
        result[i] = result[i-1] * nums[i - 1];
    }
    int prev_answer = 1;
    for (int j = numsSize - 1; j >= 0; j--) {
        result[j] *= prev_answer;
        prev_answer *= nums[j];
    }
    return result;
}
