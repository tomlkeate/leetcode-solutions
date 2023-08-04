class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        if (hours[0] >= target) hours[0] = 1;
        else hours[0] = 0;
        for (int i = 1; i < hours.size(); i++) {
            if (hours[i] >= target) hours[0]++;
        }
        return hours[0];
    }
};
