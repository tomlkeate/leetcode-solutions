class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> biggest_candies;
        int biggest_candy = candies[0];
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] >= biggest_candy) {
                biggest_candy = candies[i];
            }
            biggest_candies.push_back(false);
        }
        for (int j = 0; j < candies.size(); j++) {
            candies[j] += extraCandies;
            if (biggest_candy <= candies[j]) {
                biggest_candies[j] = true;
            }
        }
        return biggest_candies;
    }
};
