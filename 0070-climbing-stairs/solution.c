int climbStairs(int n) {
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    int first_previous = 1;
    int second_previous = 1;
    int current = 0;
    for (int i = 1; i < n; ++i) {
        current = first_previous + second_previous;
        second_previous = first_previous;
        first_previous = current;
    }
    return current;
}
