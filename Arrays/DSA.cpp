#include <iostream>  
#include <vector>  
#include <queue>  
#include <limits.h>  
  
using namespace std;  
  
typedef pair<int, int> pii;  
  
const int MAXN = 100005; // maximum number of vertices in the graph  
  
vector<pii> adj[MAXN]; // adjacency list to store the graph  
  
int dist[MAXN]; // array to store the shortest distance from the source to each vertex  
  
bool vis[MAXN]; // boolean array to mark if a vertex has been visited  
  
int n, m; // number of vertices and edges in the graph  
  
void dijkstra(int s) {  
    // initialize distance array  
    for(int i = 1; i <= n; i++) {  
        dist[i] = INT_MAX;  
        vis[i] = false;  
    }  
  
    // priority queue to store vertices with minimum distance from the source  
    priority_queue<pii, vector<pii>, greater<pii>> pq;  
  
    // add source vertex to priority queue  
    dist[s] = 0;  
    pq.push(make_pair(0, s));  
  
    while(!pq.empty()) {  
        int u = pq.top().second;  
        pq.pop();  
  
        if(vis[u]) continue; // if vertex has already been visited, skip it  
  
        vis[u] = true;  
  
        for(auto edge : adj[u]) {  
            int v = edge.first;  
            int w = edge.second;  
  
            if(dist[u] + w < dist[v]) {  
                dist[v] = dist[u] + w;  
                pq.push(make_pair(dist[v], v));  
            }  
        }  
    }  
}  
  
int main() {  
    cin >> n >> m;  
  
    // read in graph  
    for(int i = 0; i < m; i++) {  
        int u, v, w;  
        cin >> u >> v >> w;  
        adj[u].push_back(make_pair(v, w));  
        adj[v].push_back(make_pair(u, w)); // remove this line for directed graphs  
    }  
  
    int s;  
    cin >> s; // source vertex  
  
    dijkstra(s);  
  
    // print the shortest distance to each vertex  
    for(int i = 1; i <= n; i++) {  
        cout << "Distance from " << s << " to " << i << " is " << dist[i] << endl;  
    }  
  
    return 0;  
}
