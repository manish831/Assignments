# Solution Steps for the Question.
- Take all input like, number of nodes and edges of each warkstations.
```
Input 1:
n=4
connections = [[0,1], [0,2], [1,2]];

Output 1:
1

Explanation: 
Remove the cable between workstations 1 and 2 and place it between workstations 1 and 3.
```

```
Input 2:
n=6
connections = [[0,1], [0,2], [0,3], [1, 2]];

Output 2:
-1

Explanation: 
There are not enough cable. Hence, not possible.
```

- If number of edges(or connections) is less than `n-1`, simply return -1 because the minimum number of edges which connect `n` nodes is `n-1`.

- Make a adjacent list which contains the nodes which connected with each  node.
- Initialise a variable `ans` by `0`.
- Initialize a boolean vector `visited` of size `n` with `false`

- Traverse from `0` to `n-1`, if any of the node is not visited call `dfs(adj, visited, i) `

1. Mark `visited[i]` true and traverse all adjacent node of `adj[i]`.
2. Increment `ans` by 1.

- Return ans-1.


# Time Complexity:
- Since we have to traverse all the node `n` and also have to traverse all the edges of each node.
So `O(n+m)`

# Space Complexity:
- Took a visited array of n size.
- For the adjacency list, we need `n+m` space.
so overall Space Complexity would be `O(n+m)`.
