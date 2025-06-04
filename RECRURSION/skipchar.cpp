#include <bits/stdc++.h>
using namespace std;
void f(string &name,string ans,int i,char ch){
     if(i==name.length()){
          cout<<ans<<endl;
          return ;
     }
     char c=name[i];
     if(c==ch)
     f(name,ans,i+1,ch);
     else f(name,ans+c,i+1,ch);

}
int main() {
    string name="Monu Dhakad";
    string ans="";
    
    f(name,ans,0,'a');
    return 0;
}