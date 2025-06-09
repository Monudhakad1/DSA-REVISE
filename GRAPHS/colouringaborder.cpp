#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
vector<pair<int,int>>result;
     vector<vector<int>> colorBorder(vector<vector<int>>&image , int sr , int sc , int color){
     
     }

     void dfs(vector<vector<int>>& image , int incolor , int cr , int cc , int color ){
          int n=image.size();
          int m=image[0].size();
          if(cr<0 || cc<0 ||cr>=n ||cc>=m || image[cr][cc]==color) return ;
          image[cr][cc]=color;
          dfs(image,incolor,cr-1,cc,color) ,dfs(image,incolor,cr+1,cc,color) ,dfs(image,incolor,cr,cc+1,color) ,dfs(image,incolor,cr,cc-1,color) ;

          // Below is while combing back from recursion
          if(r>0)
     }

};

int main() {
    // Your code goes here

    return 0;
}