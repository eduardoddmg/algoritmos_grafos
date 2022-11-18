def bfs(graph, visited, queue, v):
    visited.append(v)
    queue.append(v)

    while queue:
        print(queue)
        m = queue.pop(0)
        print(m)

        for vizinho in graph[m]:
            if vizinho not in visited:
                visited.append(vizinho)
                queue.append(vizinho)
    

def dfs(graph, visited, v):
    # print(visited)
    if v not in visited:
        print(v)
        visited.append(v)
        for vizinho in graph[v]:
            if vizinho not in visited:
                dfs(graph, visited, vizinho)

def main():
    graph = [[1,2], [2,3], [4], [4], []]
    visited = []
    queue = []
    bfs(graph, visited, queue, 0)
    # visited = []
    # dfs(graph, visited, 0)
main()