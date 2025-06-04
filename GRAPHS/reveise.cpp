#include <bits/stdc++.h>
using namespace std;

vector<list<int>> graph;
int v; // number of vertices

// Flag means bi-Directional
void add_Edge(int source, int destination ,bool flag)
{
     graph[source].push_back(destination);
     if(flag)
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
int main()
{
     // Your code goes here
     cin >> v;
     graph.resize(v, list<int>());

     int e;

     cin >> e;
     while (e--)
     {
          int s, d ;
          cin >> s >> d;
          add_Edge(s, d ,true);
     }

     display();
}