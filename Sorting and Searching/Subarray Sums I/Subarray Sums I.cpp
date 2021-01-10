#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
  int n, x;
  cin>>n>>x;
  map<ll, int>m;
  m[0]++;
  int ans=0;
  ll s=0;
  for(int i=0; i<n; ++i){
    int a;
    cin>>a;
    s+=a;
    ans+=m[s-x];//if sum s-x exist, the most recent n elements equals x
    m[s]++;
  }
  cout<<ans;
}
