#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
  int n, t;
  cin>>n>>t;
  int k[n];
  for(int i=0; i<n; ++i)
    cin>>k[i];
  ll lb=1, ub=1e18;
  //use binary search to guess and check the time needed
  while(lb<ub){
    ll mb=(lb+ub)/2, s=0;
    for(int i=0; i<n; ++i)
      s+=min(mb/k[i],(ll) 1e9);
    if(s>=t)
      ub=mb;
    else
      lb=mb+1;
  }
  cout<<lb;
}
