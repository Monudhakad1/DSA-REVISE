#include <bits/stdc++.h>
using namespace std;
unordered_set<int>visited;
vector<list<int>>graph;
int vertices;
void add_edge(int src ,int des, bool bi_dir=true){
     graph[src].push_back(des);
     if(bi_dir) graph[des].push_back(src);
}

bool dfs(int curr,int end){
     if(curr==end) return true;
     visited.insert(curr);//marks as visited
     for(auto neigh : graph[curr]){
          if(! visited.count(neigh)){
               bool result=dfs(neigh,end);
               if(result) return true;
          }
     }
     return false;
}
bool anyPath(int src,int des){
     return dfs(src,des);
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
    int sr , de;
    cin>>sr>>de;
    cout<<anyPath(sr,de)<<" ";
    return 0;
}