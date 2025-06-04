#include <bits/stdc++.h>
using namespace std;

vector<list<int>>graph;
int vertices;
void add_edge(int src,int des, bool bi_dir=true){
     graph[src].push_back(des);
     if(bi_dir){
          graph[des].push_back(src);
     }
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

int main(){
    cin>>vertices;
    graph.resize(vertices,list<int>());
    int edge;
    cin>>edge;
    
    while(edge--){
     int s,d;
     cin>>s>>d;
     add_edge(s,d,false);
}
    display();
    return 0;
}