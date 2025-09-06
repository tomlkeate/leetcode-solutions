// dfs recursive
// func canFinish(numCourses int, prerequisites [][]int) bool {
//     adj := make([][]int, numCourses)
//     for _, pre := range prerequisites {
//         adj[pre[1]] = append(adj[pre[1]], pre[0])
//     }
//     // 0 unvisted
//     // 1 visting
//     // 2 visted
//     states := make([]int, numCourses)
//     for node := range numCourses - 1 {
//         if states[node] == 0 {
//             if dfs(adj, states, node) {
//                 return false
//             }
//         }
//     }
//     return true
// }

// func dfs(adj [][]int, states []int, node int) bool {
//     states[node] = 1
//     for _, neighbor := range adj[node] {
//         switch states[neighbor] {
//             case 0:
//                 if dfs(adj, states, neighbor) {
//                     return true
//                 }
//             case 1:
//                 return true
//         }
//     }
//     states[node] = 2
//     return false
// }

// topological sort with Kahns algorithm (BFS)
// func canFinish(numCourses int, prerequisites [][]int) bool {
//     completed := 0
//     adj := make([][]int, numCourses)
//     in_degree := make([]int, numCourses)
//     for _, pre := range prerequisites {
//         in_degree[pre[0]]++
//         adj[pre[1]] = append(adj[pre[1]], pre[0])
//     }
//     queue := []int{}
//     for course := range numCourses {
//         if in_degree[course] == 0 {
//             queue = append(queue, course)
//         }
//     }
//     for len(queue) != 0 {
//         course := queue[0]
//         queue = queue[1:]
//         completed++
//         for _, neighbor := range adj[course] {
//             in_degree[neighbor]--
//             if in_degree[neighbor] == 0 {
//                 queue = append(queue, neighbor)
//             }
//         }
//     }
//     return completed == numCourses
// }

// dfs iterative
func canFinish(numCourses int, prerequisites [][]int) bool {
    adj := make([][]int, numCourses)
    for _, prereq := range prerequisites {
        adj[prereq[1]] = append(adj[prereq[1]], prereq[0])
    }
    states := make([]int, numCourses)
    // unvisted
    // visting
    // visted
    for course := range numCourses {
        stack := []int{course}
        for len(stack) != 0 {
            course := stack[len(stack) - 1]
            if states[course] == 0 {
                states[course] = 1
            }
            foundNewPath := false
            for _, neighbor := range adj[course] {
                 if states[neighbor] == 1 {
                    return false
                } else if states[neighbor] == 0 {
                    stack = append(stack, neighbor)
                    foundNewPath = true
                    break
                }
            }
            if !foundNewPath {
                states[course] = 2
                stack = stack[:len(stack) - 1]
            }
        }
    }
    return true
}
