#include <bits/stdc++.h>
using namespace std;
vector<list<int>>graph;
unordered_set<int>visited;
int vertices;
vector<vector<int>>result;
void add_edge(int src , int des , bool bi_dir=true){
     graph[src].push_back(des);
     if(bi_dir) graph[des].push_back(src);
}

void BFS(int src , int dst , vector<int>&distance){
     queue<int>que;
     visited.clear();
     distance.resize(vertices,INT_MAX);
     distance[src]=0;
     visited.insert(src);
     que.push(src);
     while(!que.empty()){
          int curr=que.front();
          que.pop();
          for(auto neigh:graph[curr]){
               if(!visited.count(neigh)){
                    que.push(neigh);
                    visited.insert(neigh);
               distance[neigh]=distance[curr]+1;

                   }
          }

     }
}
int main() {
     // Your code goes here
     cin>>vertices;
     graph.resize(vertices , list<int>());
     int edges;
     cin>>edges;
     while(edges--){
      int s,d;
      cin>>s>>d;
      add_edge(s,d);
     }
     int x,y;
 }