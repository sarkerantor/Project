#include <stdio.h>
#include <limits.h>
#define INF 10000000
int main() {
    //freopen("input.txt", "r", stdin);
    int node, m, x, y, w;
    scanf("%d %d", &node, &m);
    
    int dist[node];
    for (int i = 0; i < node; i++) {
        dist[i] = INF;
    }
    int edge[m][3];
    for (int i = 0; i < m; i++) {
        scanf("%d %d %d", &x, &y, &w);
        edge[i][0] = x;
        edge[i][1] = y;
        edge[i][2] = w;
    }
    
    int source;
    scanf("%d", &source);
    dist[source] = 0;
    
    for (int i = 0; i < node - 1; i++) {
        for (int j = 0; j < m; j++) {
            int u = edge[j][0], v = edge[j][1], w = edge[j][2];
            if (dist[u] != INF && dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
            }
        }
    }
    for (int i = 0; i < node; i++) {
        printf("%d ", dist[i]);
    }
    printf("\n");
    return 0;
}
