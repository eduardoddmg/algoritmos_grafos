#include<bits/stdc++.h>
#include <fstream>

#define lli long long int
#define veci vector<int>
#define vecb vector<bool>
#define vecp vector<pair<int, int>>

using namespace std;

void dijkstra(vecp graph[], int n, int src, int final) {
    ofstream File(string("output.dat"));
    src-=1; final-=1;
    veci dist(n, 999999);
    vecb visited(n, false);
    dist[src] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push(make_pair(0, src));
    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();
        if (!visited[u]) {
	        for(auto x : graph[u]){
	            int y = x.first;
	            int w = x.second;
	            if(dist[y] > dist[u] + w){
	                dist[y] = dist[u] + w;
	                pq.push(make_pair(dist[y], y));
	             }
	        }
        }
        visited[u] = true;
    }
        for (int i = 0; i < n; i++) {
            cout << i+1  << ":" << dist[i] << " ";
            File << i+1  << ":" << dist[i] << " ";
        }
        cout << endl;
        File << endl;
        cout << "distancia de " << src+1 << " ate " << final+1 << " eh " << dist[final] << endl;
        File << "distancia de " << src+1 << " ate " << final+1 << " eh " << dist[final] << endl;

        File.close();
}
int main(int argc, char *argv[]) {
    int n, m; cin >> n >> m;
    vecp graph[n];
    for (int i = 0; i < m; i++) {
        int u, v, w; cin >> u >> v >> w;
        graph[u-1].push_back({v-1,w});
        graph[v-1].push_back({u-1,w});
    }
    int i, l; cin >> i >> l;
    dijkstra(graph, n, i, l);
}