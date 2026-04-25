#include <stdio.h>
2.
3. #define V 5
4. #define E 6
5.
6. int parent[V];
7.
8. // Find the representative (leader) of the set containing vertex v
9. int findLeader(int v)
10. {
11. while (parent[v] != v)
12. v = parent[v];
13. return v;
14. }
15.
16. // Merge two disjoint sets
17. void mergeSets(int u, int v)
18. {
19. int a = findLeader(u);
20. int b = findLeader(v);
21. parent[a] = b;
22. }
23.
24. // Bubble sort to organize edges by weight
25. void sortEdges(int edges[E][3])
26. {
27. for (int i = 0; i < E - 1; i++)
28. {
29. for (int j = 0; j < E - i - 1; j++)
30. {
31. if (edges[j][2] > edges[j + 1][2])
32. {
33. for (int k = 0; k < 3; k++)
34. {
35. int temp = edges[j][k];
36. edges[j][k] = edges[j + 1][k];
37. edges[j + 1][k] = temp;
38. }
}
40. }
41. }
42. }
43.
44. void kruskal(int edges[E][3])
45. {
46. sortEdges(edges);
47.
48. for (int i = 0; i < V; i++)
49. parent[i] = i;
50.
51. int count = 0, cost = 0;
52. printf("Selected Edges:\n");
53.
54. for (int i = 0; i < E; i++)
55. {
56. int u = edges[i][0];
57. int v = edges[i][1];
58. int w = edges[i][2];
59.
60. // If leaders are different, no cycle is formed
61. if (findLeader(u) != findLeader(v))
62. {
63. printf("%d -- %d (Weight: %d)\n", u, v, w);
64. mergeSets(u, v);
65. cost += w;
66. count++;
67. }
68.
69. if (count == V - 1)
70. break;
71. }
72. printf("Total Cost: %d\n", cost);
73. }
74.
75. int main()
76. {
77. int edges[E][3] = {
78. {0, 1, 2}, {0, 2, 3}, {1, 2, 5}, {1, 3, 3}, {2, 4, 4}, {3, 4, 2}};
79.
80. kruskal(edges);
81. return 0;
82. }
