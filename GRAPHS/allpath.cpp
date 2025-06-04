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
void dfs(int curr, int end, vector<int>&path){
     if(curr==end){
          path.push_back(curr);
          result.push_back(path);
          path.pop_back();
          return;
     }
     visited.insert(curr);
     path.push_back(curr);
     for(auto ele: graph[curr]){
          if(!visited.count(ele)){
               dfs(ele,end,path);
          }
     }
     path.pop_back();
     visited.erase(curr);
     return;
}
void allpath(int src,int des){
     vector<int>v;
     dfs(src,des,v);
}
void display(){
     for(int i=0;i<graph.size();i++){
          for(auto ele: graph[i]){
               cout<<ele<<" ,";
          }
          cout<<endl;
     }
}
int main() {
     cin>>vertices;
     int edge;
     cin>>edge;
     while(edge--){
          int s,d;
          cin>>s>>d;
          add_edge(s,d);
     }
     int x,y;
     cin>>x>>y;
     allpath(x,y);
     display();

    return 0;
}