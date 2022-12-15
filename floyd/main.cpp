#include<bits/stdc++.h>
#include <fstream>

#define lli long long int
#define veci vector<int>
#define vecb vector<bool>
#define vecp vector<pair<int, int>>

using namespace std;

void floyd (vector<vector<int>> cost, int n, int src, int final) {
    ofstream File(string("output.dat"));
    vector <vector<int>> d (n, vector<int>(n, 99999));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			d[i][j] = cost[i][j];
		}
	}
	for (int k = 0; k < n; ++k) {
	    for (int i = 0; i < n; ++i) {
	        for (int j = 0; j < n; ++j) {
	            if (d[i][k] < 99999 && d[k][j] < 99999)
	                d[i][j] = min(d[i][j], d[i][k] + d[k][j]); 
	        }
	    }
	}
    for (int i = 0; i < n; i++) {
        cout << i+1  << ":" << d[src][i] << " ";
        File << i+1  << ":" << d[src][i] << " ";
    }
    cout << endl;
    File << endl;
    cout << "distancia de " << src+1 << " ate " << final+1 << " eh " << d[src][final] << endl;
    File << "distancia de " << src+1 << " ate " << final+1 << " eh " << d[src][final] << endl;
    
    File.close();
}


int main(int argc, char *argv[]) {
    int n, m; cin >> n >> m;
    vector <vector<int>> cost (n, vector<int>(n, 9999));

    for (int i = 0; i < m; i++) {
        int u, v, w; cin >> u >> v >> w;
        cost[u-1][v-1] = w;
        cost[v-1][u-1] = w;
    }
    int i, l; cin >> i >> l;
    floyd(cost, n, i-1, l-1);
}