int numberOfSteps(int num){
    int steps = 0;
    while (num > 0) {
        steps++;
        if ((num & 1) == 0) {
            num = num >> 1;
            continue;
        }
        num--;
    }
    return steps;
}
