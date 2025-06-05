#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> result;
unordered_set<int> visited;
vector<list<int>> graph;
int v;

void addEdge(int src, int destination) {
    graph[src].push_back(destination);
    graph[destination].push_back(src); // Bi-directional
}

void Display() {
    for (int i = 0; i < graph.size(); i++) {
        cout << i << " -> ";
        for (auto ele : graph[i]) {
            cout << ele << " , ";
        }
        cout << endl;
    }
}

void DFS(int source, int destination, vector<int> &path) {
    if (source == destination) {
        path.push_back(source);
        result.push_back(path);
        path.pop_back();
        return;
    }

    visited.insert(source);
    path.push_back(source);

    for (int neigh : graph[source]) {
        if (!visited.count(neigh)) {
            DFS(neigh, destination, path);
        }
    }

    path.pop_back();
    visited.erase(source);
}

void AllPath(int src, int des) {
    vector<int> ans;
    DFS(src, des, ans);
}

void displayPath() {
    if (result.empty()) {
        cout << "No path exists between the given nodes." << endl;
        return;
    }

    cout << "All paths from source to destination:\n";
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j];
            if (j < result[i].size() - 1)
                cout << " -> ";
        }
        cout << endl;
    }
}

int main() {
    cout << "Enter number of vertices and edges: ";
    cin >> v;
    graph.resize(v);

    int e;
    cin >> e;

    cout << "Enter edges (source destination):\n";
    while (e--) {
        int s, d;
        cin >> s >> d;
        addEdge(s, d);
    }

    int src, dest;
    cout << "Enter source and destination to find all paths: ";
    cin >> src >> dest;

    AllPath(src, dest);
    displayPath();
}
