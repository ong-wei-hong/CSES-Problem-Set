#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, val;
  cin>>n;
  vector<bool>v(n+1, true);
  while(cin>>val){
    v[val]=false;
  }
  for(int i=1; i<=n; i++){
    if(v[i]){
      cout<<i;
      return 0;
    }
  }
}
