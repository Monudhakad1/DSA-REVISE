#include <bits/stdc++.h>
using namespace std;
void f(string s,string a,int i){
    if(i==s.length()) {
        cout<<a<<endl;
        return;
    }
    f(s,a+s[i],i+1);
    f(s,a,i+1);
}
int main() {
    string a="ABC";
    f(a,"",0);
}