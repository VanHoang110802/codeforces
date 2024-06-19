#include <bits/stdc++.h>
using namespace std;

const long long inf = 1000000000000000007;
long long dist[100007], trace[100007];
vector<pair<int, long long> > adj[100007];
priority_queue<pair<long long, int>, vector<pair<long long, int> >, greater<pair<long long, int> > > pq;
int V, E, start;

void XuLy()
{
	cin >> V >> E; start = 1;
	for(int i = 1; i <= E; ++i)
	{
		int u, v, w; cin >> u >> v >> w;
		adj[u].push_back(make_pair(v, w));
		adj[v].push_back(make_pair(u, w));
	}
	for(int i = 1; i <= V; ++i)
	{
		dist[i] = inf;
	}
	dist[start] = 0;
	pq.push(make_pair(0, start));
	while(!pq.empty())
	{
		pair<int, int> pqTop = pq.top();
		pq.pop();
		int u = pqTop.second;
		for(int i = 0; i < adj[u].size(); ++i)
		{
			pair<int, int> neighbor = adj[u][i];
			int v = neighbor.first;
			int w = neighbor.second;
			if(dist[v] > dist[u] + w)
			{
				dist[v] = dist[u] + w;
				trace[v] = u;
				pq.push(make_pair(dist[v], v));
			}
		}
	}
	if(dist[V] == inf) cout << "-1\n";
	else
	{
		vector<int> ans;
		int u = V;
		do
		{
			ans.push_back(u);
			u = trace[u];
		} while(u != 0);
		for(int i = ans.size() - 1; i >= 0; --i)
		{
			cout << ans[i] << ' ';
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//int test; cin >> test; while(test--)
	{
		XuLy();
	}
	return 0;
}
