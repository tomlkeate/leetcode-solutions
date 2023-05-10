class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> solution(n+1);
        //fill(solution.begin(), solution.end(), 0);
        solution[0] = 0;
        for (int i = 1; i < n+1; i++) {
            solution[i] = solution[i >> 1] + (i & 1);
        }
        return solution;
    }
};
