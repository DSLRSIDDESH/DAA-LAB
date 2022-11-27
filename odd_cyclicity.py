graph = {}
nv = int(input("Enter the number of vertices or nodes : "))
print("Enter the vertices")
verts = []
for i in range(nv):
    p = input(f'Enter vertex-{i+1} : ')
    verts.append(p)
    graph[p] = graph.get(p,[])
ne = int(input("Enter the number of edges : "))
print("Enter the edges (in a,b type)")
for i in range(ne):
    print(f'Enter edge-{i+1} : ',end = "")
    v1,v2 = map(str,input().split(','))
    graph[v1].append(v2)
    graph[v2].append(v1)
print(graph)
def bfs_tree(graph,v):
    visited = []
    tree = {}
    for i in v:
        tree[i] = tree.get(i,[])
    root = v[0]
    visited.append(root)
    i = 0
    while(len(v) > 0):
        for j in graph[visited[i]]:
            if j not in visited :
                tree[visited[i]].append(j)
                visited.append(j)
                v.remove(j)
        i += 1
    return tree
tree = bfs_tree(graph,verts)
print(tree)