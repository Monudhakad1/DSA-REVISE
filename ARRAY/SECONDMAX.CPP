#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code goes here
    int arr[10]={1,3,4,5,13,12,3,32,12,44};
    int f=max(arr[0],arr[1]);
    int s=min(arr[0],arr[1]);
    for(int i=2;i<10;i++){
     if(arr[i]>f){
          s=f;
          f=arr[i];
     }
     else if(arr[i]>s && arr[i]!=f) s=arr[i];
    }
    cout<<"Second: "<<s<<endl;
    return 0;
}