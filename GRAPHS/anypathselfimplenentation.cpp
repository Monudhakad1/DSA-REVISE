#include <bits/stdc++.h>
using namespace std;

vector<list<int>> graph;
int v; // number of vertices
unordered_set<int> visited;

// Flag means bi-Directional
void add_Edge(int source, int destination, bool flag)
{
     graph[source].push_back(destination);
     if (flag)
          graph[destination].push_back(source);
}

void display()
{
     for (int i = 0; i < graph.size(); i++)
     {
          cout << i << " -> ";
          for (auto ele : graph[i])
          {
               cout << ele << ",";
          }
          cout << "\n";
     }
}

bool DFS_anyPath(int s, int d)
{
     if (s == d)
          return true;
     visited.insert(s);
     for (auto ele : graph[s])
     {
          if (!visited.count(ele))
          {
               bool result = DFS_anyPath(ele, d);
               if (result)
                    return true;
          }
     }
     return false;
}

int main()
{
     // Your code goes here
     cin >> v;
     graph.resize(v, list<int>());

     int e;

     cin >> e;
     while (e--)
     {
          int s, d;
          cin >> s >> d;
          add_Edge(s, d, true);
     }
     visited.clear();
     cout << DFS_anyPath(0, 6) << endl;
}