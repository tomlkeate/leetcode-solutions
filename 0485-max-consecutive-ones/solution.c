int findMaxConsecutiveOnes(int* nums, int numsSize){
    int count = 0, maxCount = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == 1) {
            if (++count > maxCount)
                maxCount = count;
            continue;
        }
        count = 0;
    }
    return maxCount;
}
