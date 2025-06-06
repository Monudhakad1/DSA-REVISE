#include <bits/stdc++.h>
using namespace std;

class Solution{
public: 
     vector<vector<int>> floodFill(vector<vector<int>>& image , int sr ,int sc , int color){
        int incolor=image[sr][sc];
        if(incolor=color) return image;
        solution(image , sr , sc , incolor , color);
        return image;
     }

     void solution(vector<vector<int>>& image , int cr , int cc, int incolor, int  color){
        int n=image.size();
        int m=image[0].size();
        if(cr<0 || cc<0 ||cr>=n ||cc>=m) return;
        if(image[cr][cc]!=incolor) return ;
        image[cr][cc]=color;
        solution(image ,cr-1, cc,incolor,color);
        solution(image , cr+1, cc,incolor,color);
        solution(image ,cr, cc-1,incolor,color);
        solution(image ,cr, cc+1,incolor,color);
     }
} ;

int main() {
    // Your code goes here

    return 0;
}