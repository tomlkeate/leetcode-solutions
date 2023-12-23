bool containsDuplicate(int* nums, int numsSize) {
    int cmpI(int *num1, int*num2) {
        return *num1 - *num2;
    };
    int *size = nums + numsSize - 1;
    qsort(nums, numsSize, sizeof(int), cmpI);
    for (; nums < size; nums++) {
        if (*nums == *(nums + 1)) return true;
    }
    return false;
}
