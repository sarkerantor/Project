#include<stdio.h>
#include<limits.h>
#define inf 10000000
int main() {
    //freopen("input.txt","r",stdin);
    printf("Enter the number of Airport and the route: ");
    int node,edge,x,y,w;
    scanf("%d %d",&node,&edge);
    int dist[node];
    for (int i=0;i<node;i++) {
        dist[i]=inf;
    }
    int graph[edge][3];
    printf("Enter the distance between two Airport : \n");
    for (int i=0;i<edge;i++) {
        scanf("%d %d %d",&x,&y,&w);
        graph[i][0]=x;
        graph[i][1]=y;
        graph[i][2]=w;
    }
    printf("Enter the source :");
    int source;
    scanf("%d",&source);
    dist[source]=0;
    for (int i=0;i<node-1;i++) {
        for (int j=0;j<edge;j++) {
            int u=graph[j][0],v=graph[j][1],w=graph[j][2];
            if (dist[u]!=inf&&dist[u]+w<dist[v]) {
                dist[v]=dist[u]+w;
            }
        }
    }
    printf("Distance : ");
    for (int i=1;i<=node;i++) {
        printf("%d ",dist[i]);
    }
    printf("\n");
    return 0;
}
