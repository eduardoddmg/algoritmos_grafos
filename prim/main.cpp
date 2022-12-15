#include<bits/stdc++.h>

#define veci vector<int>
#define vecb vector<bool>

using namespace std;

struct Edge {
    int w = 99999, to = -1;
};

void prim(vector<vector<int>> adj, int n) {
    int total_weight = 0;
    vecb selected(n, false);
    vector<Edge> min_e(n);
    min_e[0].w = 0;

    for (int i=0; i<n; ++i) {
        int v = -1;
        for (int j = 0; j < n; ++j) {
            if (!selected[j] && (v == -1 || min_e[j].w < min_e[v].w))
                v = j;
        }

        if (min_e[v].w == 99999) {
            cout << "No MST!" << endl;
            exit(0);
        }

        selected[v] = true;
        total_weight += min_e[v].w;
        if (min_e[v].to != -1)
        cout << "(" << min_e[v].to + 1 << "," << v + 1 << ") ";

        for (int to = 0; to < n; ++to) {
            if (adj[v][to] < min_e[to].w)
                min_e[to] = {adj[v][to], v};
        }
    }
    cout << endl <<"custo total = " << total_weight << endl;
}

int main(int argc, char *argv[]) {
    int n, m; cin >> n >> m;
    vector <vector<int>> cost (n, vector<int>(n, 9999));
    for (int i = 0; i < m; i++) {
        int u, v, w; cin >> u >> v >> w;
        cost[u-1][v-1] = w;
        cost[v-1][u-1] = w;
    }
    prim(cost, n);
}