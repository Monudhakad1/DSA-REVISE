#include <bits/stdc++.h>
using namespace std;

vector<list<pair<int,int>>>graph;
int vertices;
void add_edges(int src , int des , int wt ,bool bi_dir=true){
     graph[src].push_back({des,wt});
     if(bi_dir) graph[des].push_back({src,wt});
}

void display(){
     for(int i=0;i<graph.size();i++){
          cout<<i<<" --> ";
          for(auto ele:graph[i]){
               cout<<"("<< ele.first <<","<<ele.second << ")";
          }
          cout<<endl;
     }
}

int main() {
    // Your code goes here
    cin>>vertices;
    graph.resize(vertices,list<pair<int,int>>());
    int edge;
    cin>>edge;
    while(edge--){
     int s,e,wt;
     cin>>s>>e>>wt;
     add_edges(s,e,wt,true);
    }
    display();
    return 0;
}