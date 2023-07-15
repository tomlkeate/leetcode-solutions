int majorityElement(int* nums, int numsSize){
    int ans = 0, count = 0;
    for (int i = 0; i < numsSize; i++) {
        if (count == 0) {
            ans = nums[i];
            count++;
        } else if (ans != nums[i]) {
            count--;
        } else {
            count++;
        }
    }
    return ans;
}
