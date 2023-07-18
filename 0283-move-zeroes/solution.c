void moveZeroes(int* nums, int numsSize){
    int l = 0, h = 1;
    while (l < numsSize && h < numsSize) {
        if (nums[l] != 0 && l < h) {
            l++;
        } else if (nums[h] == 0) {
            h++;
        } else if (l == h) {
            l++;
            h++;
        } else {
            int temp = nums[l];
            nums[l] = nums[h];
            nums[h] = temp;
            l++;
            h++;
        }
    }
}
