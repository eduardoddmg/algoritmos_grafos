#include<bits/stdc++.h>
#include <fstream>

#define lli long long int
#define veci vector<int>
#define vecb vector<bool>
#define vecp vector<pair<int, int>>

using namespace std;

typedef struct {
    int a, b, cost;
} edge;

vector<edge> e;

void bellman_ford(int n, int m, int src, int final) {
    src--;
    final--;
    veci d(n, 99999);
    d[src] = 0;
    for (int i = 0; i<n-1; ++i)
        for (int j=0; j<m; ++j) {
            if (d[e[j].a] < 99999) {
                d[e[j].b] = min (d[e[j].b], d[e[j].a] + e[j].cost);
            }
        }
    for (int i = 0; i < n; i++) {
        cout << i+1  << ":" << d[i] << " ";
    }
    cout << endl;
    cout << "distancia de " << src+1 << " ate " << final+1 << " eh " << d[final] << endl;
}


int main(int argc, char *argv[]) {
    int n, m; cin >> n >> m;
    edge new_edge;
    for (int i = 0; i < m; i++) {
        int u, v, w; cin >> u >> v >> w;
        new_edge.a = u-1;
        new_edge.b = v-1;
        new_edge.cost = w;
        e.push_back(new_edge);
    }
    int i, l; cin >> i >> l;
    bellman_ford(n, m, i, l);
}