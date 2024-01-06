int compare(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

int **threeSum(int *nums, int numsSize, int *returnSize, int **returnColumnSizes)
{
    qsort(nums, numsSize, sizeof(*nums), compare);
    *returnSize = 0;
    int **answer = NULL;
    int capacity = 1; // Initial capacity of answer array

    for (int i = 0; i < numsSize - 2; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        for (int l = i + 1, r = numsSize - 1; l < r;)
        {
            if (nums[i] + nums[l] + nums[r] > 0)
                r--;
            else if (nums[i] + nums[l] + nums[r] < 0)
                l++;
            else
            {
                if (*returnSize >= capacity - 1)
                {
                    // Double the capacity when needed
                    capacity *= 2;
                    answer = (int **)realloc(answer, capacity * sizeof(int *));
                }
                answer[*returnSize] = (int *)malloc(3 * sizeof(int));
                answer[*returnSize][0] = nums[i];
                answer[*returnSize][0] = nums[i];
                answer[*returnSize][1] = nums[l];
                answer[*returnSize][2] = nums[r];
                (*returnSize)++;
                l++;

                while (l < r && nums[l] == nums[l - 1])
                    l++;
            }
        }
    }

    *returnColumnSizes = malloc(*returnSize * sizeof(int *));
    for (int i = 0; i < *returnSize; i++)
    {
        (*returnColumnSizes)[i] = 3;
    }

    return answer;
}
