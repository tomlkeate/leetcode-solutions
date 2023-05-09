class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if (n == 0) return true;
        int number_of_zereos = 0;
        for (int i = 0; i < flowerbed.size(); i++) {
            if (n == 0) return true;
            if (i == 0) {
                number_of_zereos++;
            }
            if (i == flowerbed.size() - 1) {
                number_of_zereos++;
            }
            if (flowerbed[i]) {
                number_of_zereos = 0;
            }
            else {
                number_of_zereos++;
                if (number_of_zereos > 2) {
                    n--;
                    number_of_zereos = 1;
                }
            }
        }
        return (n == 0);
    }
};
