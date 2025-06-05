#include <bits/stdc++.h>
using namespace std;

vector<list<int>>graph;
unordered_set<int>visited;
int v;

void addEdge(int src , int dest){
     graph[src].push_back(dest);
     graph[dest].push_back(src);
}
 
void BFS(int s , int d , vector<int>&dis){
     queue<int> qu;
     visited.clear();
     dis.resize(v , INT_MAX);
     dis[s]=0;
     visited.insert(s);
     qu.push(s);
     while(!qu.empty()){
          int curr=qu.front();
          qu.pop();
          for(auto neigh:graph[curr]){
               if(!visited.count(neigh)){
                    dis[neigh]=dis[curr]+1;
                    visited.insert(neigh);
                    qu.push(neigh);
               }
          }
     }
}

int main() {
     cin>>v;
     int e;
     cin>>e;
     while(e--){
          int s,d;
          cin>>s>>d;
          addEdge(s,d);
     }    
    return 0;
}