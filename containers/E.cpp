#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, v1, v2, w, id = 0, s = 0;
	cin >> n;

	vector<vector<pair<int, int>>> graph(n);
	for (int i = 0; i < n; i++) {
		cin >> v1 >> v2 >> w;
		graph[v1].push_back({ v2,w });
	}

	vector<vector<pair<int, int>>> :: iterator it;
	vector<pair<int, int>> ::iterator cur;

	for (it = graph.begin(); it != graph.end(); it++)
	{
		for (cur = (*it).begin(); cur != (*it).end(); cur++) {
			s += (*cur).second;
		}
		if ((*it).size() != 0) {
			cout << id << " " << (*it).size() << " " << s << endl;
		}
		id++;
		s = 0;
	}
	//system("pause");
	return 0;
