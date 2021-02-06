#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main(){
  int n, a, b;
  cin>>n>>a>>b;
  ll c[n+1];
  for(int i=0; i<n; ++i){
    cin>>c[i+1];
    c[i+1]+=c[i];
  }
  set<ar<ll, 2>> s;
  ll ans=-1e18;
  for(int i=0; i<=n; ++i){
    if(i>=a)
      s.insert({c[i-a], i-a});
    if(s.size())
      ans=max(ans, c[i]-(*s.begin())[0]); //s.begin() holds the smallest value
    if(i>=b)
      s.erase({c[i-b], i-b});
  }
  cout<<ans;
}
