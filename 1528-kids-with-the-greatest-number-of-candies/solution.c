/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize){
    bool * result = malloc(candiesSize * sizeof(bool));
    *returnSize = candiesSize;
    if (candiesSize > 0) {
        int largest = candies[0];
        for (int i = 0; i < candiesSize; i++) {
            if (largest < candies[i]) largest = candies[i];
        }
        for (int j = 0; j < candiesSize; j++) {
            result[j] = (candies[j] + extraCandies >= largest);
        }
    }
    return result;
}
