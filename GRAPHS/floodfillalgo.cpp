#include <bits/stdc++.h>
using namespace std;

class solution{
     public:
     vector<vector<int>> floodFill(vector<vector<int>> & image , int sr,int sc,int color){
          dfs(image , sr,sc,image[sr][sc],color);
          return image;
     }

     void dfs(vector<vector<int>> &image ,int cr , int cc,int incolor,int nwcolor){
          int n=image.size();
          int m=image[0].size();
          //BASE CASE
          if (cr < 0 || cc < 0 || cr >= n || cc >= m) return ;
          if(image[cr][cc]!=incolor) return;
          image[cr][cc]=nwcolor;
          dfs(image,cr-1,cc,incolor,nwcolor);
          dfs(image,cr+1,cc,incolor,nwcolor);
          dfs(image,cr,cc-1,incolor,nwcolor);
          dfs(image,cr,cc+1,incolor,nwcolor);
     }

};

int main() {
    // Your code goes here

    return 0;
}