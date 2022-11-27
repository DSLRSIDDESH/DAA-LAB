INF = float('inf')
nv = int(input("Enter the number of vertices : "))
print("Vertices are from 0 to",nv-1)
ne = int(input("Enter the number of edges : "))
print("Enter the edges in 'vertex-1 vertex-2 distance' manner")
graph = [[INF for i in range(nv)] for j in range(nv)]
for i in range(ne):
    u,v,w = map(int,input(f'Enter edge-{i+1} : ').split())
    graph[u][v] = w
    graph[v][u] = w
def apsp(dist,nv):
    for i in range(nv):
        dist[i][i] = 0
    for i in range(nv):
        for j in range(nv):
            for k in range(nv):
                dist[i][j] = min(dist[i][j],dist[i][k]+dist[k][j])
    return dist
dist = apsp(graph,nv)
print("All pairs shortest path : ")
for i in range(nv):
    for j in range(nv):
        print(f"({i},{j})-{dist[i][j]}",end = " ")
    print()