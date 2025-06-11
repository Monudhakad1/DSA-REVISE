#include <bits/stdc++.h>
using namespace std;

int find(vector<int> &parent, int x)
{
    // this method returns group belongs to x
    return parent[x] = (parent[x] == x) ? x : find(parent, parent[x]);
}

void Union(vector<int> &parent, vector<int> &rank, int a, int b)
{
    a = find(parent, a);
    b = find(parent, b);

    if(rank[a]>=rank[b]){
        rank[a]++;
        parent[b]=a;
    }
    else {
        rank[b]++;
        parent[a]=b;
    }
}

int main()
{

    return 0;
}