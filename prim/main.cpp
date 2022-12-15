#include <fstream>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

#define veci vector<int>
#define vecb vector<bool>

typedef pair<int, int> weight_pair;

typedef struct Graph {
    int n;
    vector<pair<int, int> >* adj;
} graph_st;

void prim(int src, graph_st g) {
    ofstream File(string("output.dat"));
    priority_queue<weight_pair, vector<weight_pair>, greater<weight_pair> > pq;

    int n = g.n;

    vecb in_tree(n, false); veci v_dad(n, -1); veci v_weight(n, 99999);

    v_weight[src] = 0;
    pq.push(make_pair(0, src));

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        if(in_tree[u] == true)
            continue;

        in_tree[u] = true;

        vector<pair<int, int>>::iterator i;
        for (i = g.adj[u].begin(); i != g.adj[u].end(); i++)
        {
            int v = (*i).first;
            int w = (*i).second;
 
            if (in_tree[v] == false)
            {
                if (v_weight[v] > w)
                {
                    v_weight[v] = w;
                    v_dad[v] = u;
                    pq.push(make_pair(v_weight[v], v));
                }
            }
        }
    }

    cout << "Arvore MST: " << endl;
    File << "Arvore MST: " << endl;
    for (int i = 1; i < n; i++) {
        cout << "(" << v_dad[i]+1 << "," << i+1 << ")" << endl;
        File << "(" << v_dad[i]+1 << "," << i+1 << ")" << endl;
    }
    int total = 0;
    for (int i = 0; i < v_weight.size(); i++) total += v_weight[i];
    cout << "custo: " << total << endl;
    File << "custo: " << total << endl;
    File.close();
}

int main(void) {
    int n, m; cin >> n >> m;
    graph_st g;
  	g.n = n;
  	g.adj = new vector<weight_pair>[n];
    for (int i = 0; i < m; i++) {
        int u, v, w; cin >> u >> v >> w;
        g.adj[u-1].push_back(make_pair(v-1, w));
        g.adj[v-1].push_back(make_pair(u-1, w));
    }
    int i; cin >> i;
    prim(i-1, g);
}