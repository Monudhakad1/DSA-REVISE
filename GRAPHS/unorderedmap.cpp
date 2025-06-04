#include <bits/stdc++.h>
using namespace std;

vector<unordered_map<int ,int >> graph;
int v; // number of vertices

// Flag means bi-Directional
void add_Edge(int source, int destination ,bool flag ,int weight)
{
     graph[source][destination]=weight;
     if(flag)
     graph[destination][source]=weight;
}

void display()
{
     for (int i = 0; i < graph.size(); i++)
     {
          cout << i << " -> ";
          for (auto ele : graph[i])
          {
               cout << "("<<ele.first <<"," <<ele.second << ")" << ",";
          }
          cout << "\n";
     }
}
int main()
{
     // Your code goes here
     cin >> v;
     graph.resize(v, unordered_map<int,int>());

     int e;

     cin >> e;
     while (e--)
     {
          int s, d ,weight;
          cin >> s >> d >>weight;
          add_Edge(s, d ,true ,weight);
     }

     display();
}