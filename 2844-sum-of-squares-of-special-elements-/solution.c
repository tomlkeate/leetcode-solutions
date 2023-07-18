int sumOfSquares(int* nums, int numsSize){
    int solution = 0;
    for (int i = 0; i < numsSize; i++) {
        if (numsSize%(i+1) == 0) {
            solution += nums[i] * nums[i];
        }
    }
    return solution;
}
