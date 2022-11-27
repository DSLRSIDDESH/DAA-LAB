INF = float('inf')
nv = int(input("Enter the number of vertices : "))
print(f"Vertices are from 0 to {nv-1}")
graph = [[float('inf') for i in range(nv)] for j in range(nv)]
ne = int(input("Enter the number of edges : "))
print("Enter the edges in 'vertex-1 vertex-2 weight' manner")
for i in range(ne):
    v1,v2,w = map(int,input(f'Enter edge-{i+1} : ').split())
    graph[v1][v2],graph[v2][v1] = w,w
def prims(graph,nv):
    for i in range(nv):
        graph[i][i] = 0
    tree = []
    min_weight = 0
    s = []
    s.append(0)
    while(len(tree) < nv-1):
        min_val, v1, v2 = INF, '', ''
        for i in range(len(s)):
            u = s[i]
            for j in range(len(graph[u])):
                if j not in s and graph[u][j] < min_val :
                    min_val = min(graph[u][j],min_val)
                    v1 = u
                    v2 = j
        min_weight += min_val
        s.append(v2)
        tree.append((v1,v2))
    print("The weight of the minimum spanning tree :", min_weight)
    return tree
tree = prims(graph,nv)
print("The edges in minimum spanning tree are : ")
print(tree)