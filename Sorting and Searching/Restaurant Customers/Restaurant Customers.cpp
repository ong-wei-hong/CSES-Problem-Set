#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  set<array<int, 2>> s;
  for(int i=0; i<n; ++i){
    int a, b;
    cin>>a>>b;
    s.insert({2*a, 1});
    s.insert({2*b+1, -1});
  }
  //set keeps track of the time when people leave and enter
  int ans=0, curr=0;
  for(array<int, 2> a: s){
    curr+=a[1];
    ans=max(ans, curr);
  }
  cout<<ans;
}
