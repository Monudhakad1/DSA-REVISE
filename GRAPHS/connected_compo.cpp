#include <bits/stdc++.h>
using namespace std;

vector<list<int>>graph;
int vertices;
void add_edge(int src,int des){
     graph[src].push_back(des);
     
          graph[des].push_back(src);
     
}

void display(){
     for(int i=0;i<graph.size();i++){
          cout<<i<<" --> ";
          for(auto e : graph[i]){
               cout<<e<<" , ";
          }
          cout<<endl;
     }
}

void dfs(int node , unordered_set<int>&visited){
     visited.insert(node);
     for(auto neigh: graph[node]){
          if(! visited.count(neigh)){
                dfs(neigh,visited);
          }
     }
}
int connectedComponent(){
     int res=0;
     unordered_set<int>visited;
     for(int i=0;i<vertices;i++){
          //go every vertex 
          if(visited.count(i) == 0){
               res++;
               dfs(i,visited);
          }
     }
     return res;
     
}

int main(){
    cin>>vertices;
    graph.resize(vertices,list<int>());
    int edge;
    cin>>edge;
    
    while(edge--){
     int s,d;
     cin>>s>>d;
     add_edge(s,d);
}
    display();
    return 0;
}