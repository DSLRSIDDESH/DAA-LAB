INF = float('inf')
nv = int(input("Enter the number of vertices : "))
print(f"Vertices are from 0 to {nv-1}")
graph = [[float('inf') for i in range(nv)] for j in range(nv)]
ne = int(input("Enter the number of edges : "))
print("Enter the edges in 'vertex-1 vertex-2 weight' manner")
for i in range(ne):
    v1,v2,w = map(int,input(f'Enter edge-{i+1} : ').split())
    graph[v1][v2] = w
    graph[v2][v1] = w
src = int(input("Enter the source vertex : "))
def dijkstra(graph,nv,src):
    tree = [[graph[i][j] for i in range(nv)] for j in range(nv)]
    for i in range(nv):
        tree[i][i] = 0
    s = [src]
    while(len(s) < nv-1):
        min_val, v1, v2 = INF, '', ''
        for i in range(len(s)):
            u = s[i]
            for j in range(len(graph[u])):
                if j not in s and graph[u][j] < min_val :
                    min_val = min(graph[u][j],min_val)
                    v1 = u
                    v2 = j
        dist = tree[src][v1] + min_val
        for i in range(nv):
            tree[src][i] = min(dist + tree[v2][i], tree[src][i])
        s.append(v2)
    return tree[src]
distance_matrix = dijkstra(graph,nv,src)
print(f"The minimum distance of {src} to :")
for i in range(nv):
    if i != 0:
        print("                              ",end = "")
        print(f'{i} is {distance_matrix[i]}')