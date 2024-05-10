int missingNumber(int* nums, int numsSize) {
    int flag = numsSize;
    for (int i = 0; i < numsSize; i++) {
        flag ^= i ^ nums[i];
    }
    return flag;
}
