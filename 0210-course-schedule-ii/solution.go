func findOrder(numCourses int, prerequisites [][]int) []int {
    adj := make([][]int, numCourses)
    in_degree := make([]int, numCourses)
    for _, prereq := range prerequisites {
        adj[prereq[1]] = append(adj[prereq[1]], prereq[0])
        in_degree[prereq[0]]++
    }
    queue := []int{}
    for course, degree := range in_degree {
        if degree == 0 {
            queue = append(queue, course)
        }
    }
    ans := []int{}
    for len(queue) != 0 {
        current := queue[0]
        ans = append(ans, current)
        queue = queue[1:]
        for _, dest := range adj[current] {
            in_degree[dest]--
            if in_degree[dest] == 0 {
                queue = append(queue, dest)
            }
        }
    }
    if len(ans) != numCourses {
        return []int{}
    }
    return ans
}
