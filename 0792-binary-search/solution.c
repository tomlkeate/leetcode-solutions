int search(int* nums, int numsSize, int target){
    int mid = (numsSize - 1)/2, l = 0;
    while (l < numsSize) {
        mid = (l + numsSize - 1) / 2;
        if (nums[mid] == target)
            return mid;
        else if (target < nums[mid])
            numsSize = mid;
        else
            l = mid + 1;
    }
    return -1;
}
